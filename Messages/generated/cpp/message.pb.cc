// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#include "message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_command_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_command_2eproto ::google::protobuf::internal::SCCInfo<32> scc_info_Command;
}  // namespace protobuf_command_2eproto
namespace protobuf_game_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_game_2eproto ::google::protobuf::internal::SCCInfo<10> scc_info_FrameUpdate;
}  // namespace protobuf_game_2eproto
namespace protobuf_init_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_init_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ClientBroadcast;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_init_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ServerResponse;
}  // namespace protobuf_init_2eproto
namespace protobuf_message_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_message_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EndofQueue;
}  // namespace protobuf_message_2eproto
namespace dapi {
namespace message {
class EndofQueueDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EndofQueue>
      _instance;
} _EndofQueue_default_instance_;
class MessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Message>
      _instance;
  const ::dapi::init::ClientBroadcast* initbroadcast_;
  const ::dapi::init::ServerResponse* initresponse_;
  const ::dapi::game::FrameUpdate* frameupdate_;
  const ::dapi::commands::Command* command_;
  const ::dapi::message::EndofQueue* endofqueue_;
} _Message_default_instance_;
}  // namespace message
}  // namespace dapi
namespace protobuf_message_2eproto {
static void InitDefaultsEndofQueue() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dapi::message::_EndofQueue_default_instance_;
    new (ptr) ::dapi::message::EndofQueue();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dapi::message::EndofQueue::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EndofQueue =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEndofQueue}, {}};

static void InitDefaultsMessage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dapi::message::_Message_default_instance_;
    new (ptr) ::dapi::message::Message();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dapi::message::Message::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<5> scc_info_Message =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsMessage}, {
      &protobuf_init_2eproto::scc_info_ClientBroadcast.base,
      &protobuf_init_2eproto::scc_info_ServerResponse.base,
      &protobuf_game_2eproto::scc_info_FrameUpdate.base,
      &protobuf_command_2eproto::scc_info_Command.base,
      &protobuf_message_2eproto::scc_info_EndofQueue.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EndofQueue.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Message.base);
}

}  // namespace protobuf_message_2eproto
namespace dapi {
namespace message {

// ===================================================================

void EndofQueue::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EndofQueue::EndofQueue()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_message_2eproto::scc_info_EndofQueue.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:dapi.message.EndofQueue)
}
EndofQueue::EndofQueue(const EndofQueue& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:dapi.message.EndofQueue)
}

void EndofQueue::SharedCtor() {
}

EndofQueue::~EndofQueue() {
  // @@protoc_insertion_point(destructor:dapi.message.EndofQueue)
  SharedDtor();
}

void EndofQueue::SharedDtor() {
}

void EndofQueue::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EndofQueue& EndofQueue::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_message_2eproto::scc_info_EndofQueue.base);
  return *internal_default_instance();
}


void EndofQueue::Clear() {
// @@protoc_insertion_point(message_clear_start:dapi.message.EndofQueue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool EndofQueue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:dapi.message.EndofQueue)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(
        input, tag, &unknown_fields_stream));
  }
success:
  // @@protoc_insertion_point(parse_success:dapi.message.EndofQueue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dapi.message.EndofQueue)
  return false;
#undef DO_
}

void EndofQueue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dapi.message.EndofQueue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:dapi.message.EndofQueue)
}

size_t EndofQueue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dapi.message.EndofQueue)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EndofQueue::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EndofQueue*>(&from));
}

void EndofQueue::MergeFrom(const EndofQueue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dapi.message.EndofQueue)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void EndofQueue::CopyFrom(const EndofQueue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dapi.message.EndofQueue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EndofQueue::IsInitialized() const {
  return true;
}

void EndofQueue::Swap(EndofQueue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EndofQueue::InternalSwap(EndofQueue* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string EndofQueue::GetTypeName() const {
  return "dapi.message.EndofQueue";
}


// ===================================================================

void Message::InitAsDefaultInstance() {
}
void Message::set_allocated_initbroadcast(::dapi::init::ClientBroadcast* initbroadcast) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (initbroadcast) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      initbroadcast = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, initbroadcast, submessage_arena);
    }
    set_has_initbroadcast();
    msg_.initbroadcast_ = initbroadcast;
  }
  // @@protoc_insertion_point(field_set_allocated:dapi.message.Message.initBroadcast)
}
void Message::clear_initbroadcast() {
  if (has_initbroadcast()) {
    delete msg_.initbroadcast_;
    clear_has_msg();
  }
}
void Message::set_allocated_initresponse(::dapi::init::ServerResponse* initresponse) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (initresponse) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      initresponse = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, initresponse, submessage_arena);
    }
    set_has_initresponse();
    msg_.initresponse_ = initresponse;
  }
  // @@protoc_insertion_point(field_set_allocated:dapi.message.Message.initResponse)
}
void Message::clear_initresponse() {
  if (has_initresponse()) {
    delete msg_.initresponse_;
    clear_has_msg();
  }
}
void Message::set_allocated_frameupdate(::dapi::game::FrameUpdate* frameupdate) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (frameupdate) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      frameupdate = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, frameupdate, submessage_arena);
    }
    set_has_frameupdate();
    msg_.frameupdate_ = frameupdate;
  }
  // @@protoc_insertion_point(field_set_allocated:dapi.message.Message.frameUpdate)
}
void Message::clear_frameupdate() {
  if (has_frameupdate()) {
    delete msg_.frameupdate_;
    clear_has_msg();
  }
}
void Message::set_allocated_command(::dapi::commands::Command* command) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (command) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      command = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, command, submessage_arena);
    }
    set_has_command();
    msg_.command_ = command;
  }
  // @@protoc_insertion_point(field_set_allocated:dapi.message.Message.command)
}
void Message::clear_command() {
  if (has_command()) {
    delete msg_.command_;
    clear_has_msg();
  }
}
void Message::set_allocated_endofqueue(::dapi::message::EndofQueue* endofqueue) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (endofqueue) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      endofqueue = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, endofqueue, submessage_arena);
    }
    set_has_endofqueue();
    msg_.endofqueue_ = endofqueue;
  }
  // @@protoc_insertion_point(field_set_allocated:dapi.message.Message.endOfQueue)
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Message::kInitBroadcastFieldNumber;
const int Message::kInitResponseFieldNumber;
const int Message::kFrameUpdateFieldNumber;
const int Message::kCommandFieldNumber;
const int Message::kEndOfQueueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Message::Message()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_message_2eproto::scc_info_Message.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:dapi.message.Message)
}
Message::Message(const Message& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_msg();
  switch (from.msg_case()) {
    case kInitBroadcast: {
      mutable_initbroadcast()->::dapi::init::ClientBroadcast::MergeFrom(from.initbroadcast());
      break;
    }
    case kInitResponse: {
      mutable_initresponse()->::dapi::init::ServerResponse::MergeFrom(from.initresponse());
      break;
    }
    case kFrameUpdate: {
      mutable_frameupdate()->::dapi::game::FrameUpdate::MergeFrom(from.frameupdate());
      break;
    }
    case kCommand: {
      mutable_command()->::dapi::commands::Command::MergeFrom(from.command());
      break;
    }
    case kEndOfQueue: {
      mutable_endofqueue()->::dapi::message::EndofQueue::MergeFrom(from.endofqueue());
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:dapi.message.Message)
}

void Message::SharedCtor() {
  clear_has_msg();
}

Message::~Message() {
  // @@protoc_insertion_point(destructor:dapi.message.Message)
  SharedDtor();
}

void Message::SharedDtor() {
  if (has_msg()) {
    clear_msg();
  }
}

void Message::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Message& Message::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_message_2eproto::scc_info_Message.base);
  return *internal_default_instance();
}


void Message::clear_msg() {
// @@protoc_insertion_point(one_of_clear_start:dapi.message.Message)
  switch (msg_case()) {
    case kInitBroadcast: {
      delete msg_.initbroadcast_;
      break;
    }
    case kInitResponse: {
      delete msg_.initresponse_;
      break;
    }
    case kFrameUpdate: {
      delete msg_.frameupdate_;
      break;
    }
    case kCommand: {
      delete msg_.command_;
      break;
    }
    case kEndOfQueue: {
      delete msg_.endofqueue_;
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = MSG_NOT_SET;
}


void Message::Clear() {
// @@protoc_insertion_point(message_clear_start:dapi.message.Message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_msg();
  _internal_metadata_.Clear();
}

bool Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:dapi.message.Message)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .dapi.init.ClientBroadcast initBroadcast = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_initbroadcast()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .dapi.init.ServerResponse initResponse = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_initresponse()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .dapi.game.FrameUpdate frameUpdate = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_frameupdate()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .dapi.commands.Command command = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_command()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .dapi.message.EndofQueue endOfQueue = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_endofqueue()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dapi.message.Message)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dapi.message.Message)
  return false;
#undef DO_
}

void Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dapi.message.Message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .dapi.init.ClientBroadcast initBroadcast = 1;
  if (has_initbroadcast()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->_internal_initbroadcast(), output);
  }

  // .dapi.init.ServerResponse initResponse = 2;
  if (has_initresponse()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->_internal_initresponse(), output);
  }

  // .dapi.game.FrameUpdate frameUpdate = 3;
  if (has_frameupdate()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->_internal_frameupdate(), output);
  }

  // .dapi.commands.Command command = 4;
  if (has_command()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->_internal_command(), output);
  }

  // .dapi.message.EndofQueue endOfQueue = 5;
  if (has_endofqueue()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, this->_internal_endofqueue(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:dapi.message.Message)
}

size_t Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dapi.message.Message)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  switch (msg_case()) {
    // .dapi.init.ClientBroadcast initBroadcast = 1;
    case kInitBroadcast: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.initbroadcast_);
      break;
    }
    // .dapi.init.ServerResponse initResponse = 2;
    case kInitResponse: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.initresponse_);
      break;
    }
    // .dapi.game.FrameUpdate frameUpdate = 3;
    case kFrameUpdate: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.frameupdate_);
      break;
    }
    // .dapi.commands.Command command = 4;
    case kCommand: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.command_);
      break;
    }
    // .dapi.message.EndofQueue endOfQueue = 5;
    case kEndOfQueue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.endofqueue_);
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Message::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Message*>(&from));
}

void Message::MergeFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dapi.message.Message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.msg_case()) {
    case kInitBroadcast: {
      mutable_initbroadcast()->::dapi::init::ClientBroadcast::MergeFrom(from.initbroadcast());
      break;
    }
    case kInitResponse: {
      mutable_initresponse()->::dapi::init::ServerResponse::MergeFrom(from.initresponse());
      break;
    }
    case kFrameUpdate: {
      mutable_frameupdate()->::dapi::game::FrameUpdate::MergeFrom(from.frameupdate());
      break;
    }
    case kCommand: {
      mutable_command()->::dapi::commands::Command::MergeFrom(from.command());
      break;
    }
    case kEndOfQueue: {
      mutable_endofqueue()->::dapi::message::EndofQueue::MergeFrom(from.endofqueue());
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
}

void Message::CopyFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dapi.message.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  return true;
}

void Message::Swap(Message* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Message::InternalSwap(Message* other) {
  using std::swap;
  swap(msg_, other->msg_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string Message::GetTypeName() const {
  return "dapi.message.Message";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace message
}  // namespace dapi
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::dapi::message::EndofQueue* Arena::CreateMaybeMessage< ::dapi::message::EndofQueue >(Arena* arena) {
  return Arena::CreateInternal< ::dapi::message::EndofQueue >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::dapi::message::Message* Arena::CreateMaybeMessage< ::dapi::message::Message >(Arena* arena) {
  return Arena::CreateInternal< ::dapi::message::Message >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
