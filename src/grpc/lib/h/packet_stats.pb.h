// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet_stats.proto

#ifndef PROTOBUF_packet_5fstats_2eproto__INCLUDED
#define PROTOBUF_packet_5fstats_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "telemetry_top.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_packet_5fstats_2eproto();
void protobuf_AssignDesc_packet_5fstats_2eproto();
void protobuf_ShutdownFile_packet_5fstats_2eproto();

class PacketStatistics;
class PacketStatsClass;
class PacketStatsCounter;
class PacketStatsPacketForwardingEngine;

// ===================================================================

class PacketStatistics : public ::google::protobuf::Message {
 public:
  PacketStatistics();
  virtual ~PacketStatistics();

  PacketStatistics(const PacketStatistics& from);

  inline PacketStatistics& operator=(const PacketStatistics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PacketStatistics& default_instance();

  void Swap(PacketStatistics* other);

  // implements Message ----------------------------------------------

  inline PacketStatistics* New() const { return New(NULL); }

  PacketStatistics* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacketStatistics& from);
  void MergeFrom(const PacketStatistics& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PacketStatistics* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PacketStatsClass packet_stats = 1;
  int packet_stats_size() const;
  void clear_packet_stats();
  static const int kPacketStatsFieldNumber = 1;
  const ::PacketStatsClass& packet_stats(int index) const;
  ::PacketStatsClass* mutable_packet_stats(int index);
  ::PacketStatsClass* add_packet_stats();
  ::google::protobuf::RepeatedPtrField< ::PacketStatsClass >*
      mutable_packet_stats();
  const ::google::protobuf::RepeatedPtrField< ::PacketStatsClass >&
      packet_stats() const;

  // repeated .PacketStatsPacketForwardingEngine packet_stats_pfe = 2;
  int packet_stats_pfe_size() const;
  void clear_packet_stats_pfe();
  static const int kPacketStatsPfeFieldNumber = 2;
  const ::PacketStatsPacketForwardingEngine& packet_stats_pfe(int index) const;
  ::PacketStatsPacketForwardingEngine* mutable_packet_stats_pfe(int index);
  ::PacketStatsPacketForwardingEngine* add_packet_stats_pfe();
  ::google::protobuf::RepeatedPtrField< ::PacketStatsPacketForwardingEngine >*
      mutable_packet_stats_pfe();
  const ::google::protobuf::RepeatedPtrField< ::PacketStatsPacketForwardingEngine >&
      packet_stats_pfe() const;

  // @@protoc_insertion_point(class_scope:PacketStatistics)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::PacketStatsClass > packet_stats_;
  ::google::protobuf::RepeatedPtrField< ::PacketStatsPacketForwardingEngine > packet_stats_pfe_;
  friend void  protobuf_AddDesc_packet_5fstats_2eproto();
  friend void protobuf_AssignDesc_packet_5fstats_2eproto();
  friend void protobuf_ShutdownFile_packet_5fstats_2eproto();

  void InitAsDefaultInstance();
  static PacketStatistics* default_instance_;
};
// -------------------------------------------------------------------

class PacketStatsPacketForwardingEngine : public ::google::protobuf::Message {
 public:
  PacketStatsPacketForwardingEngine();
  virtual ~PacketStatsPacketForwardingEngine();

  PacketStatsPacketForwardingEngine(const PacketStatsPacketForwardingEngine& from);

  inline PacketStatsPacketForwardingEngine& operator=(const PacketStatsPacketForwardingEngine& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PacketStatsPacketForwardingEngine& default_instance();

  void Swap(PacketStatsPacketForwardingEngine* other);

  // implements Message ----------------------------------------------

  inline PacketStatsPacketForwardingEngine* New() const { return New(NULL); }

  PacketStatsPacketForwardingEngine* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacketStatsPacketForwardingEngine& from);
  void MergeFrom(const PacketStatsPacketForwardingEngine& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PacketStatsPacketForwardingEngine* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string pfe_identifier = 1;
  bool has_pfe_identifier() const;
  void clear_pfe_identifier();
  static const int kPfeIdentifierFieldNumber = 1;
  const ::std::string& pfe_identifier() const;
  void set_pfe_identifier(const ::std::string& value);
  void set_pfe_identifier(const char* value);
  void set_pfe_identifier(const char* value, size_t size);
  ::std::string* mutable_pfe_identifier();
  ::std::string* release_pfe_identifier();
  void set_allocated_pfe_identifier(::std::string* pfe_identifier);

  // repeated .PacketStatsClass packet_stats = 2;
  int packet_stats_size() const;
  void clear_packet_stats();
  static const int kPacketStatsFieldNumber = 2;
  const ::PacketStatsClass& packet_stats(int index) const;
  ::PacketStatsClass* mutable_packet_stats(int index);
  ::PacketStatsClass* add_packet_stats();
  ::google::protobuf::RepeatedPtrField< ::PacketStatsClass >*
      mutable_packet_stats();
  const ::google::protobuf::RepeatedPtrField< ::PacketStatsClass >&
      packet_stats() const;

  // @@protoc_insertion_point(class_scope:PacketStatsPacketForwardingEngine)
 private:
  inline void set_has_pfe_identifier();
  inline void clear_has_pfe_identifier();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr pfe_identifier_;
  ::google::protobuf::RepeatedPtrField< ::PacketStatsClass > packet_stats_;
  friend void  protobuf_AddDesc_packet_5fstats_2eproto();
  friend void protobuf_AssignDesc_packet_5fstats_2eproto();
  friend void protobuf_ShutdownFile_packet_5fstats_2eproto();

  void InitAsDefaultInstance();
  static PacketStatsPacketForwardingEngine* default_instance_;
};
// -------------------------------------------------------------------

class PacketStatsClass : public ::google::protobuf::Message {
 public:
  PacketStatsClass();
  virtual ~PacketStatsClass();

  PacketStatsClass(const PacketStatsClass& from);

  inline PacketStatsClass& operator=(const PacketStatsClass& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PacketStatsClass& default_instance();

  void Swap(PacketStatsClass* other);

  // implements Message ----------------------------------------------

  inline PacketStatsClass* New() const { return New(NULL); }

  PacketStatsClass* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacketStatsClass& from);
  void MergeFrom(const PacketStatsClass& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PacketStatsClass* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // required .PacketStatsCounter counter = 2;
  bool has_counter() const;
  void clear_counter();
  static const int kCounterFieldNumber = 2;
  const ::PacketStatsCounter& counter() const;
  ::PacketStatsCounter* mutable_counter();
  ::PacketStatsCounter* release_counter();
  void set_allocated_counter(::PacketStatsCounter* counter);

  // @@protoc_insertion_point(class_scope:PacketStatsClass)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_counter();
  inline void clear_has_counter();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::PacketStatsCounter* counter_;
  friend void  protobuf_AddDesc_packet_5fstats_2eproto();
  friend void protobuf_AssignDesc_packet_5fstats_2eproto();
  friend void protobuf_ShutdownFile_packet_5fstats_2eproto();

  void InitAsDefaultInstance();
  static PacketStatsClass* default_instance_;
};
// -------------------------------------------------------------------

class PacketStatsCounter : public ::google::protobuf::Message {
 public:
  PacketStatsCounter();
  virtual ~PacketStatsCounter();

  PacketStatsCounter(const PacketStatsCounter& from);

  inline PacketStatsCounter& operator=(const PacketStatsCounter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PacketStatsCounter& default_instance();

  void Swap(PacketStatsCounter* other);

  // implements Message ----------------------------------------------

  inline PacketStatsCounter* New() const { return New(NULL); }

  PacketStatsCounter* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacketStatsCounter& from);
  void MergeFrom(const PacketStatsCounter& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PacketStatsCounter* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint64 packet_count = 1;
  bool has_packet_count() const;
  void clear_packet_count();
  static const int kPacketCountFieldNumber = 1;
  ::google::protobuf::uint64 packet_count() const;
  void set_packet_count(::google::protobuf::uint64 value);

  // optional uint64 byte_count = 2;
  bool has_byte_count() const;
  void clear_byte_count();
  static const int kByteCountFieldNumber = 2;
  ::google::protobuf::uint64 byte_count() const;
  void set_byte_count(::google::protobuf::uint64 value);

  // optional uint64 packet_rate = 3;
  bool has_packet_rate() const;
  void clear_packet_rate();
  static const int kPacketRateFieldNumber = 3;
  ::google::protobuf::uint64 packet_rate() const;
  void set_packet_rate(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:PacketStatsCounter)
 private:
  inline void set_has_packet_count();
  inline void clear_has_packet_count();
  inline void set_has_byte_count();
  inline void clear_has_byte_count();
  inline void set_has_packet_rate();
  inline void clear_has_packet_rate();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 packet_count_;
  ::google::protobuf::uint64 byte_count_;
  ::google::protobuf::uint64 packet_rate_;
  friend void  protobuf_AddDesc_packet_5fstats_2eproto();
  friend void protobuf_AssignDesc_packet_5fstats_2eproto();
  friend void protobuf_ShutdownFile_packet_5fstats_2eproto();

  void InitAsDefaultInstance();
  static PacketStatsCounter* default_instance_;
};
// ===================================================================

static const int kJnprPacketStatisticsExtFieldNumber = 10;
extern ::google::protobuf::internal::ExtensionIdentifier< ::JuniperNetworksSensors,
    ::google::protobuf::internal::MessageTypeTraits< ::PacketStatistics >, 11, false >
  jnpr_packet_statistics_ext;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PacketStatistics

// repeated .PacketStatsClass packet_stats = 1;
inline int PacketStatistics::packet_stats_size() const {
  return packet_stats_.size();
}
inline void PacketStatistics::clear_packet_stats() {
  packet_stats_.Clear();
}
inline const ::PacketStatsClass& PacketStatistics::packet_stats(int index) const {
  // @@protoc_insertion_point(field_get:PacketStatistics.packet_stats)
  return packet_stats_.Get(index);
}
inline ::PacketStatsClass* PacketStatistics::mutable_packet_stats(int index) {
  // @@protoc_insertion_point(field_mutable:PacketStatistics.packet_stats)
  return packet_stats_.Mutable(index);
}
inline ::PacketStatsClass* PacketStatistics::add_packet_stats() {
  // @@protoc_insertion_point(field_add:PacketStatistics.packet_stats)
  return packet_stats_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PacketStatsClass >*
PacketStatistics::mutable_packet_stats() {
  // @@protoc_insertion_point(field_mutable_list:PacketStatistics.packet_stats)
  return &packet_stats_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PacketStatsClass >&
PacketStatistics::packet_stats() const {
  // @@protoc_insertion_point(field_list:PacketStatistics.packet_stats)
  return packet_stats_;
}

// repeated .PacketStatsPacketForwardingEngine packet_stats_pfe = 2;
inline int PacketStatistics::packet_stats_pfe_size() const {
  return packet_stats_pfe_.size();
}
inline void PacketStatistics::clear_packet_stats_pfe() {
  packet_stats_pfe_.Clear();
}
inline const ::PacketStatsPacketForwardingEngine& PacketStatistics::packet_stats_pfe(int index) const {
  // @@protoc_insertion_point(field_get:PacketStatistics.packet_stats_pfe)
  return packet_stats_pfe_.Get(index);
}
inline ::PacketStatsPacketForwardingEngine* PacketStatistics::mutable_packet_stats_pfe(int index) {
  // @@protoc_insertion_point(field_mutable:PacketStatistics.packet_stats_pfe)
  return packet_stats_pfe_.Mutable(index);
}
inline ::PacketStatsPacketForwardingEngine* PacketStatistics::add_packet_stats_pfe() {
  // @@protoc_insertion_point(field_add:PacketStatistics.packet_stats_pfe)
  return packet_stats_pfe_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PacketStatsPacketForwardingEngine >*
PacketStatistics::mutable_packet_stats_pfe() {
  // @@protoc_insertion_point(field_mutable_list:PacketStatistics.packet_stats_pfe)
  return &packet_stats_pfe_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PacketStatsPacketForwardingEngine >&
PacketStatistics::packet_stats_pfe() const {
  // @@protoc_insertion_point(field_list:PacketStatistics.packet_stats_pfe)
  return packet_stats_pfe_;
}

// -------------------------------------------------------------------

// PacketStatsPacketForwardingEngine

// required string pfe_identifier = 1;
inline bool PacketStatsPacketForwardingEngine::has_pfe_identifier() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PacketStatsPacketForwardingEngine::set_has_pfe_identifier() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PacketStatsPacketForwardingEngine::clear_has_pfe_identifier() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PacketStatsPacketForwardingEngine::clear_pfe_identifier() {
  pfe_identifier_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_pfe_identifier();
}
inline const ::std::string& PacketStatsPacketForwardingEngine::pfe_identifier() const {
  // @@protoc_insertion_point(field_get:PacketStatsPacketForwardingEngine.pfe_identifier)
  return pfe_identifier_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PacketStatsPacketForwardingEngine::set_pfe_identifier(const ::std::string& value) {
  set_has_pfe_identifier();
  pfe_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PacketStatsPacketForwardingEngine.pfe_identifier)
}
inline void PacketStatsPacketForwardingEngine::set_pfe_identifier(const char* value) {
  set_has_pfe_identifier();
  pfe_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PacketStatsPacketForwardingEngine.pfe_identifier)
}
inline void PacketStatsPacketForwardingEngine::set_pfe_identifier(const char* value, size_t size) {
  set_has_pfe_identifier();
  pfe_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PacketStatsPacketForwardingEngine.pfe_identifier)
}
inline ::std::string* PacketStatsPacketForwardingEngine::mutable_pfe_identifier() {
  set_has_pfe_identifier();
  // @@protoc_insertion_point(field_mutable:PacketStatsPacketForwardingEngine.pfe_identifier)
  return pfe_identifier_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PacketStatsPacketForwardingEngine::release_pfe_identifier() {
  clear_has_pfe_identifier();
  return pfe_identifier_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PacketStatsPacketForwardingEngine::set_allocated_pfe_identifier(::std::string* pfe_identifier) {
  if (pfe_identifier != NULL) {
    set_has_pfe_identifier();
  } else {
    clear_has_pfe_identifier();
  }
  pfe_identifier_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pfe_identifier);
  // @@protoc_insertion_point(field_set_allocated:PacketStatsPacketForwardingEngine.pfe_identifier)
}

// repeated .PacketStatsClass packet_stats = 2;
inline int PacketStatsPacketForwardingEngine::packet_stats_size() const {
  return packet_stats_.size();
}
inline void PacketStatsPacketForwardingEngine::clear_packet_stats() {
  packet_stats_.Clear();
}
inline const ::PacketStatsClass& PacketStatsPacketForwardingEngine::packet_stats(int index) const {
  // @@protoc_insertion_point(field_get:PacketStatsPacketForwardingEngine.packet_stats)
  return packet_stats_.Get(index);
}
inline ::PacketStatsClass* PacketStatsPacketForwardingEngine::mutable_packet_stats(int index) {
  // @@protoc_insertion_point(field_mutable:PacketStatsPacketForwardingEngine.packet_stats)
  return packet_stats_.Mutable(index);
}
inline ::PacketStatsClass* PacketStatsPacketForwardingEngine::add_packet_stats() {
  // @@protoc_insertion_point(field_add:PacketStatsPacketForwardingEngine.packet_stats)
  return packet_stats_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PacketStatsClass >*
PacketStatsPacketForwardingEngine::mutable_packet_stats() {
  // @@protoc_insertion_point(field_mutable_list:PacketStatsPacketForwardingEngine.packet_stats)
  return &packet_stats_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PacketStatsClass >&
PacketStatsPacketForwardingEngine::packet_stats() const {
  // @@protoc_insertion_point(field_list:PacketStatsPacketForwardingEngine.packet_stats)
  return packet_stats_;
}

// -------------------------------------------------------------------

// PacketStatsClass

// required string name = 1;
inline bool PacketStatsClass::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PacketStatsClass::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PacketStatsClass::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PacketStatsClass::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& PacketStatsClass::name() const {
  // @@protoc_insertion_point(field_get:PacketStatsClass.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PacketStatsClass::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PacketStatsClass.name)
}
inline void PacketStatsClass::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PacketStatsClass.name)
}
inline void PacketStatsClass::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PacketStatsClass.name)
}
inline ::std::string* PacketStatsClass::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:PacketStatsClass.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PacketStatsClass::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PacketStatsClass::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:PacketStatsClass.name)
}

// required .PacketStatsCounter counter = 2;
inline bool PacketStatsClass::has_counter() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PacketStatsClass::set_has_counter() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PacketStatsClass::clear_has_counter() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PacketStatsClass::clear_counter() {
  if (counter_ != NULL) counter_->::PacketStatsCounter::Clear();
  clear_has_counter();
}
inline const ::PacketStatsCounter& PacketStatsClass::counter() const {
  // @@protoc_insertion_point(field_get:PacketStatsClass.counter)
  return counter_ != NULL ? *counter_ : *default_instance_->counter_;
}
inline ::PacketStatsCounter* PacketStatsClass::mutable_counter() {
  set_has_counter();
  if (counter_ == NULL) {
    counter_ = new ::PacketStatsCounter;
  }
  // @@protoc_insertion_point(field_mutable:PacketStatsClass.counter)
  return counter_;
}
inline ::PacketStatsCounter* PacketStatsClass::release_counter() {
  clear_has_counter();
  ::PacketStatsCounter* temp = counter_;
  counter_ = NULL;
  return temp;
}
inline void PacketStatsClass::set_allocated_counter(::PacketStatsCounter* counter) {
  delete counter_;
  counter_ = counter;
  if (counter) {
    set_has_counter();
  } else {
    clear_has_counter();
  }
  // @@protoc_insertion_point(field_set_allocated:PacketStatsClass.counter)
}

// -------------------------------------------------------------------

// PacketStatsCounter

// required uint64 packet_count = 1;
inline bool PacketStatsCounter::has_packet_count() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PacketStatsCounter::set_has_packet_count() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PacketStatsCounter::clear_has_packet_count() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PacketStatsCounter::clear_packet_count() {
  packet_count_ = GOOGLE_ULONGLONG(0);
  clear_has_packet_count();
}
inline ::google::protobuf::uint64 PacketStatsCounter::packet_count() const {
  // @@protoc_insertion_point(field_get:PacketStatsCounter.packet_count)
  return packet_count_;
}
inline void PacketStatsCounter::set_packet_count(::google::protobuf::uint64 value) {
  set_has_packet_count();
  packet_count_ = value;
  // @@protoc_insertion_point(field_set:PacketStatsCounter.packet_count)
}

// optional uint64 byte_count = 2;
inline bool PacketStatsCounter::has_byte_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PacketStatsCounter::set_has_byte_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PacketStatsCounter::clear_has_byte_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PacketStatsCounter::clear_byte_count() {
  byte_count_ = GOOGLE_ULONGLONG(0);
  clear_has_byte_count();
}
inline ::google::protobuf::uint64 PacketStatsCounter::byte_count() const {
  // @@protoc_insertion_point(field_get:PacketStatsCounter.byte_count)
  return byte_count_;
}
inline void PacketStatsCounter::set_byte_count(::google::protobuf::uint64 value) {
  set_has_byte_count();
  byte_count_ = value;
  // @@protoc_insertion_point(field_set:PacketStatsCounter.byte_count)
}

// optional uint64 packet_rate = 3;
inline bool PacketStatsCounter::has_packet_rate() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PacketStatsCounter::set_has_packet_rate() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PacketStatsCounter::clear_has_packet_rate() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PacketStatsCounter::clear_packet_rate() {
  packet_rate_ = GOOGLE_ULONGLONG(0);
  clear_has_packet_rate();
}
inline ::google::protobuf::uint64 PacketStatsCounter::packet_rate() const {
  // @@protoc_insertion_point(field_get:PacketStatsCounter.packet_rate)
  return packet_rate_;
}
inline void PacketStatsCounter::set_packet_rate(::google::protobuf::uint64 value) {
  set_has_packet_rate();
  packet_rate_ = value;
  // @@protoc_insertion_point(field_set:PacketStatsCounter.packet_rate)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_packet_5fstats_2eproto__INCLUDED
