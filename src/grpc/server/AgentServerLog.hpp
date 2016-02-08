//
//  AgentServerLog.hpp
//  agent-jv
//
//  Created by NITIN KUMAR on 1/24/16.
//  Copyright © 2016 Juniper Networks. All rights reserved.
//

#ifndef AgentServerLog_hpp
#define AgentServerLog_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

#define AGENTSERVER_LOGFILE "/Users/nitin/test/logs/agent_server.log"

class AgentServerLog {
    std::string   _logfile;
    uint64_t      _sequence_number;
    uint8_t       _level;
    std::ofstream _outputFile;

public:
    
    AgentServerLog () : _outputFile(AGENTSERVER_LOGFILE)
    {
        _logfile = std::string(AGENTSERVER_LOGFILE);
        _sequence_number = 0;
        _level = 1;
    }
    
    AgentServerLog (const std::string logfile) : _logfile(logfile), _outputFile(_logfile)
    {
        _sequence_number = 0;
        _level = 0;
    }
   
    // Write to the logger
    void log (std::string message)
    {
        if (_level == 0) {
            return;
        }
        
        _outputFile << _sequence_number << ":" << message << "\n";
        _outputFile.flush();
        _sequence_number++;
    }
    
    // Write to logger conditionally
    void log (const char *filter, std::string message)
    {
        std::size_t found = message.find(filter);
        
        if (found != std::string::npos) {
            log(message);
        }
    }
    
    void enable ()
    {
        _level = 1;
        std::cout << "Enabled logging to :" << _logfile << "\n";
        log("Logging enabled --\n");
    }
    void disable ()
    {
        log("Logging disabled --\n");
        _level = 0;
    }
};

#endif /* AgentServerLog_hpp */
