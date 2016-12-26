// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: person.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "person.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace lm {

namespace {

const ::google::protobuf::Descriptor* helloworld_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  helloworld_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_person_2eproto() {
  protobuf_AddDesc_person_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "person.proto");
  GOOGLE_CHECK(file != NULL);
  helloworld_descriptor_ = file->message_type(0);
  static const int helloworld_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, str_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, opt_),
  };
  helloworld_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      helloworld_descriptor_,
      helloworld::default_instance_,
      helloworld_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(helloworld, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(helloworld));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_person_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    helloworld_descriptor_, &helloworld::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_person_2eproto() {
  delete helloworld::default_instance_;
  delete helloworld_reflection_;
}

void protobuf_AddDesc_person_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014person.proto\022\002lm\"2\n\nhelloworld\022\n\n\002id\030\001"
    " \002(\005\022\013\n\003str\030\002 \002(\t\022\013\n\003opt\030\003 \001(\005", 70);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "person.proto", &protobuf_RegisterTypes);
  helloworld::default_instance_ = new helloworld();
  helloworld::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_person_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_person_2eproto {
  StaticDescriptorInitializer_person_2eproto() {
    protobuf_AddDesc_person_2eproto();
  }
} static_descriptor_initializer_person_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int helloworld::kIdFieldNumber;
const int helloworld::kStrFieldNumber;
const int helloworld::kOptFieldNumber;
#endif  // !_MSC_VER

helloworld::helloworld()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:lm.helloworld)
}

void helloworld::InitAsDefaultInstance() {
}

helloworld::helloworld(const helloworld& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:lm.helloworld)
}

void helloworld::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  opt_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

helloworld::~helloworld() {
  // @@protoc_insertion_point(destructor:lm.helloworld)
  SharedDtor();
}

void helloworld::SharedDtor() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (this != default_instance_) {
  }
}

void helloworld::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* helloworld::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return helloworld_descriptor_;
}

const helloworld& helloworld::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_person_2eproto();
  return *default_instance_;
}

helloworld* helloworld::default_instance_ = NULL;

helloworld* helloworld::New() const {
  return new helloworld;
}

void helloworld::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<helloworld*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(id_, opt_);
    if (has_str()) {
      if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        str_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool helloworld::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:lm.helloworld)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_str;
        break;
      }

      // required string str = 2;
      case 2: {
        if (tag == 18) {
         parse_str:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->str().data(), this->str().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "str");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_opt;
        break;
      }

      // optional int32 opt = 3;
      case 3: {
        if (tag == 24) {
         parse_opt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &opt_)));
          set_has_opt();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:lm.helloworld)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lm.helloworld)
  return false;
#undef DO_
}

void helloworld::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lm.helloworld)
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required string str = 2;
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->str(), output);
  }

  // optional int32 opt = 3;
  if (has_opt()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->opt(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:lm.helloworld)
}

::google::protobuf::uint8* helloworld::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:lm.helloworld)
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // required string str = 2;
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->str(), target);
  }

  // optional int32 opt = 3;
  if (has_opt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->opt(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lm.helloworld)
  return target;
}

int helloworld::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // required string str = 2;
    if (has_str()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->str());
    }

    // optional int32 opt = 3;
    if (has_opt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->opt());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void helloworld::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const helloworld* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const helloworld*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void helloworld::MergeFrom(const helloworld& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_str()) {
      set_str(from.str());
    }
    if (from.has_opt()) {
      set_opt(from.opt());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void helloworld::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void helloworld::CopyFrom(const helloworld& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool helloworld::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void helloworld::Swap(helloworld* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(str_, other->str_);
    std::swap(opt_, other->opt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata helloworld::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = helloworld_descriptor_;
  metadata.reflection = helloworld_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lm

// @@protoc_insertion_point(global_scope)
