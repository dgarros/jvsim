// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: agent.proto
#ifndef GRPC_agent_2eproto__INCLUDED
#define GRPC_agent_2eproto__INCLUDED

#include "agent.pb.h"

#include <grpc++/support/async_stream.h>
#include <grpc++/impl/rpc_method.h>
#include <grpc++/impl/proto_utils.h>
#include <grpc++/impl/service_type.h>
#include <grpc++/support/async_unary_call.h>
#include <grpc++/support/status.h>
#include <grpc++/support/stub_options.h>
#include <grpc++/support/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace agent {

class Agent GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::agent::OpenConfigData>> telemetrySubscribe(::grpc::ClientContext* context, const ::agent::SubscriptionRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::agent::OpenConfigData>>(telemetrySubscribeRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::agent::OpenConfigData>> AsynctelemetrySubscribe(::grpc::ClientContext* context, const ::agent::SubscriptionRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::agent::OpenConfigData>>(AsynctelemetrySubscribeRaw(context, request, cq, tag));
    }
    virtual ::grpc::Status telemetryUnSubscribe(::grpc::ClientContext* context, const ::agent::UnSubscribeRequest& request, ::agent::Reply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::agent::Reply>> AsynctelemetryUnSubscribe(::grpc::ClientContext* context, const ::agent::UnSubscribeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::agent::Reply>>(AsynctelemetryUnSubscribeRaw(context, request, cq));
    }
    virtual ::grpc::Status telemetrySubscriptionsGet(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::agent::OpenConfigData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::agent::OpenConfigData>> AsynctelemetrySubscriptionsGet(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::agent::OpenConfigData>>(AsynctelemetrySubscriptionsGetRaw(context, request, cq));
    }
    virtual ::grpc::Status telemetryOperationalStateGet(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::agent::OpenConfigData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::agent::OpenConfigData>> AsynctelemetryOperationalStateGet(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::agent::OpenConfigData>>(AsynctelemetryOperationalStateGetRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientReaderInterface< ::agent::OpenConfigData>* telemetrySubscribeRaw(::grpc::ClientContext* context, const ::agent::SubscriptionRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::agent::OpenConfigData>* AsynctelemetrySubscribeRaw(::grpc::ClientContext* context, const ::agent::SubscriptionRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::agent::Reply>* AsynctelemetryUnSubscribeRaw(::grpc::ClientContext* context, const ::agent::UnSubscribeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::agent::OpenConfigData>* AsynctelemetrySubscriptionsGetRaw(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::agent::OpenConfigData>* AsynctelemetryOperationalStateGetRaw(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::Channel>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::agent::OpenConfigData>> telemetrySubscribe(::grpc::ClientContext* context, const ::agent::SubscriptionRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::agent::OpenConfigData>>(telemetrySubscribeRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::agent::OpenConfigData>> AsynctelemetrySubscribe(::grpc::ClientContext* context, const ::agent::SubscriptionRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::agent::OpenConfigData>>(AsynctelemetrySubscribeRaw(context, request, cq, tag));
    }
    ::grpc::Status telemetryUnSubscribe(::grpc::ClientContext* context, const ::agent::UnSubscribeRequest& request, ::agent::Reply* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::agent::Reply>> AsynctelemetryUnSubscribe(::grpc::ClientContext* context, const ::agent::UnSubscribeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::agent::Reply>>(AsynctelemetryUnSubscribeRaw(context, request, cq));
    }
    ::grpc::Status telemetrySubscriptionsGet(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::agent::OpenConfigData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::agent::OpenConfigData>> AsynctelemetrySubscriptionsGet(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::agent::OpenConfigData>>(AsynctelemetrySubscriptionsGetRaw(context, request, cq));
    }
    ::grpc::Status telemetryOperationalStateGet(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::agent::OpenConfigData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::agent::OpenConfigData>> AsynctelemetryOperationalStateGet(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::agent::OpenConfigData>>(AsynctelemetryOperationalStateGetRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::Channel> channel_;
    ::grpc::ClientReader< ::agent::OpenConfigData>* telemetrySubscribeRaw(::grpc::ClientContext* context, const ::agent::SubscriptionRequest& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::agent::OpenConfigData>* AsynctelemetrySubscribeRaw(::grpc::ClientContext* context, const ::agent::SubscriptionRequest& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::agent::Reply>* AsynctelemetryUnSubscribeRaw(::grpc::ClientContext* context, const ::agent::UnSubscribeRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::agent::OpenConfigData>* AsynctelemetrySubscriptionsGetRaw(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::agent::OpenConfigData>* AsynctelemetryOperationalStateGetRaw(::grpc::ClientContext* context, const ::agent::GetRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_telemetrySubscribe_;
    const ::grpc::RpcMethod rpcmethod_telemetryUnSubscribe_;
    const ::grpc::RpcMethod rpcmethod_telemetrySubscriptionsGet_;
    const ::grpc::RpcMethod rpcmethod_telemetryOperationalStateGet_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::Channel>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::SynchronousService {
   public:
    Service() : service_(nullptr) {}
    virtual ~Service();
    virtual ::grpc::Status telemetrySubscribe(::grpc::ServerContext* context, const ::agent::SubscriptionRequest* request, ::grpc::ServerWriter< ::agent::OpenConfigData>* writer);
    virtual ::grpc::Status telemetryUnSubscribe(::grpc::ServerContext* context, const ::agent::UnSubscribeRequest* request, ::agent::Reply* response);
    virtual ::grpc::Status telemetrySubscriptionsGet(::grpc::ServerContext* context, const ::agent::GetRequest* request, ::agent::OpenConfigData* response);
    virtual ::grpc::Status telemetryOperationalStateGet(::grpc::ServerContext* context, const ::agent::GetRequest* request, ::agent::OpenConfigData* response);
    ::grpc::RpcService* service() GRPC_OVERRIDE GRPC_FINAL;
   private:
    ::grpc::RpcService* service_;
  };
  class AsyncService GRPC_FINAL : public ::grpc::AsynchronousService {
   public:
    explicit AsyncService();
    ~AsyncService() {};
    void RequesttelemetrySubscribe(::grpc::ServerContext* context, ::agent::SubscriptionRequest* request, ::grpc::ServerAsyncWriter< ::agent::OpenConfigData>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequesttelemetryUnSubscribe(::grpc::ServerContext* context, ::agent::UnSubscribeRequest* request, ::grpc::ServerAsyncResponseWriter< ::agent::Reply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequesttelemetrySubscriptionsGet(::grpc::ServerContext* context, ::agent::GetRequest* request, ::grpc::ServerAsyncResponseWriter< ::agent::OpenConfigData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequesttelemetryOperationalStateGet(::grpc::ServerContext* context, ::agent::GetRequest* request, ::grpc::ServerAsyncResponseWriter< ::agent::OpenConfigData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
  };
};

}  // namespace agent


#endif  // GRPC_agent_2eproto__INCLUDED
