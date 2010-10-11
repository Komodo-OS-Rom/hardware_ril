// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ctrl.proto

#ifndef PROTOBUF_ctrl_2eproto__INCLUDED
#define PROTOBUF_ctrl_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "ril.pb.h"
// @@protoc_insertion_point(includes)

namespace ril_proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ctrl_2eproto();
void protobuf_AssignDesc_ctrl_2eproto();
void protobuf_ShutdownFile_ctrl_2eproto();

class CtrlReqRadioState;
class CtrlRspRadioState;
class CtrlReqSetMTCall;

enum CtrlCmd {
  CTRL_CMD_ECHO = 0,
  CTRL_CMD_GET_RADIO_STATE = 1,
  CTRL_CMD_SET_RADIO_STATE = 2,
  CTRL_CMD_SET_MT_CALL = 1001
};
bool CtrlCmd_IsValid(int value);
const CtrlCmd CtrlCmd_MIN = CTRL_CMD_ECHO;
const CtrlCmd CtrlCmd_MAX = CTRL_CMD_SET_MT_CALL;
const int CtrlCmd_ARRAYSIZE = CtrlCmd_MAX + 1;

const ::google::protobuf::EnumDescriptor* CtrlCmd_descriptor();
inline const ::std::string& CtrlCmd_Name(CtrlCmd value) {
  return ::google::protobuf::internal::NameOfEnum(
    CtrlCmd_descriptor(), value);
}
inline bool CtrlCmd_Parse(
    const ::std::string& name, CtrlCmd* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CtrlCmd>(
    CtrlCmd_descriptor(), name, value);
}
enum CtrlStatus {
  CTRL_STATUS_OK = 0,
  CTRL_STATUS_ERR = 1
};
bool CtrlStatus_IsValid(int value);
const CtrlStatus CtrlStatus_MIN = CTRL_STATUS_OK;
const CtrlStatus CtrlStatus_MAX = CTRL_STATUS_ERR;
const int CtrlStatus_ARRAYSIZE = CtrlStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* CtrlStatus_descriptor();
inline const ::std::string& CtrlStatus_Name(CtrlStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    CtrlStatus_descriptor(), value);
}
inline bool CtrlStatus_Parse(
    const ::std::string& name, CtrlStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CtrlStatus>(
    CtrlStatus_descriptor(), name, value);
}
// ===================================================================

class CtrlReqRadioState : public ::google::protobuf::Message {
 public:
  CtrlReqRadioState();
  virtual ~CtrlReqRadioState();
  
  CtrlReqRadioState(const CtrlReqRadioState& from);
  
  inline CtrlReqRadioState& operator=(const CtrlReqRadioState& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CtrlReqRadioState& default_instance();
  
  void Swap(CtrlReqRadioState* other);
  
  // implements Message ----------------------------------------------
  
  CtrlReqRadioState* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CtrlReqRadioState& from);
  void MergeFrom(const CtrlReqRadioState& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .ril_proto.RadioState state = 1;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 1;
  inline ril_proto::RadioState state() const;
  inline void set_state(ril_proto::RadioState value);
  
  // @@protoc_insertion_point(class_scope:ril_proto.CtrlReqRadioState)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  int state_;
  friend void  protobuf_AddDesc_ctrl_2eproto();
  friend void protobuf_AssignDesc_ctrl_2eproto();
  friend void protobuf_ShutdownFile_ctrl_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CtrlReqRadioState* default_instance_;
};
// -------------------------------------------------------------------

class CtrlRspRadioState : public ::google::protobuf::Message {
 public:
  CtrlRspRadioState();
  virtual ~CtrlRspRadioState();
  
  CtrlRspRadioState(const CtrlRspRadioState& from);
  
  inline CtrlRspRadioState& operator=(const CtrlRspRadioState& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CtrlRspRadioState& default_instance();
  
  void Swap(CtrlRspRadioState* other);
  
  // implements Message ----------------------------------------------
  
  CtrlRspRadioState* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CtrlRspRadioState& from);
  void MergeFrom(const CtrlRspRadioState& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .ril_proto.RadioState state = 1;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 1;
  inline ril_proto::RadioState state() const;
  inline void set_state(ril_proto::RadioState value);
  
  // @@protoc_insertion_point(class_scope:ril_proto.CtrlRspRadioState)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  int state_;
  friend void  protobuf_AddDesc_ctrl_2eproto();
  friend void protobuf_AssignDesc_ctrl_2eproto();
  friend void protobuf_ShutdownFile_ctrl_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CtrlRspRadioState* default_instance_;
};
// -------------------------------------------------------------------

class CtrlReqSetMTCall : public ::google::protobuf::Message {
 public:
  CtrlReqSetMTCall();
  virtual ~CtrlReqSetMTCall();
  
  CtrlReqSetMTCall(const CtrlReqSetMTCall& from);
  
  inline CtrlReqSetMTCall& operator=(const CtrlReqSetMTCall& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CtrlReqSetMTCall& default_instance();
  
  void Swap(CtrlReqSetMTCall* other);
  
  // implements Message ----------------------------------------------
  
  CtrlReqSetMTCall* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CtrlReqSetMTCall& from);
  void MergeFrom(const CtrlReqSetMTCall& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string phone_number = 1;
  inline bool has_phone_number() const;
  inline void clear_phone_number();
  static const int kPhoneNumberFieldNumber = 1;
  inline const ::std::string& phone_number() const;
  inline void set_phone_number(const ::std::string& value);
  inline void set_phone_number(const char* value);
  inline void set_phone_number(const char* value, size_t size);
  inline ::std::string* mutable_phone_number();
  
  // @@protoc_insertion_point(class_scope:ril_proto.CtrlReqSetMTCall)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* phone_number_;
  static const ::std::string _default_phone_number_;
  friend void  protobuf_AddDesc_ctrl_2eproto();
  friend void protobuf_AssignDesc_ctrl_2eproto();
  friend void protobuf_ShutdownFile_ctrl_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CtrlReqSetMTCall* default_instance_;
};
// ===================================================================


// ===================================================================

// CtrlReqRadioState

// required .ril_proto.RadioState state = 1;
inline bool CtrlReqRadioState::has_state() const {
  return _has_bit(0);
}
inline void CtrlReqRadioState::clear_state() {
  state_ = 0;
  _clear_bit(0);
}
inline ril_proto::RadioState CtrlReqRadioState::state() const {
  return static_cast< ril_proto::RadioState >(state_);
}
inline void CtrlReqRadioState::set_state(ril_proto::RadioState value) {
  GOOGLE_DCHECK(ril_proto::RadioState_IsValid(value));
  _set_bit(0);
  state_ = value;
}

// -------------------------------------------------------------------

// CtrlRspRadioState

// required .ril_proto.RadioState state = 1;
inline bool CtrlRspRadioState::has_state() const {
  return _has_bit(0);
}
inline void CtrlRspRadioState::clear_state() {
  state_ = 0;
  _clear_bit(0);
}
inline ril_proto::RadioState CtrlRspRadioState::state() const {
  return static_cast< ril_proto::RadioState >(state_);
}
inline void CtrlRspRadioState::set_state(ril_proto::RadioState value) {
  GOOGLE_DCHECK(ril_proto::RadioState_IsValid(value));
  _set_bit(0);
  state_ = value;
}

// -------------------------------------------------------------------

// CtrlReqSetMTCall

// required string phone_number = 1;
inline bool CtrlReqSetMTCall::has_phone_number() const {
  return _has_bit(0);
}
inline void CtrlReqSetMTCall::clear_phone_number() {
  if (phone_number_ != &_default_phone_number_) {
    phone_number_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& CtrlReqSetMTCall::phone_number() const {
  return *phone_number_;
}
inline void CtrlReqSetMTCall::set_phone_number(const ::std::string& value) {
  _set_bit(0);
  if (phone_number_ == &_default_phone_number_) {
    phone_number_ = new ::std::string;
  }
  phone_number_->assign(value);
}
inline void CtrlReqSetMTCall::set_phone_number(const char* value) {
  _set_bit(0);
  if (phone_number_ == &_default_phone_number_) {
    phone_number_ = new ::std::string;
  }
  phone_number_->assign(value);
}
inline void CtrlReqSetMTCall::set_phone_number(const char* value, size_t size) {
  _set_bit(0);
  if (phone_number_ == &_default_phone_number_) {
    phone_number_ = new ::std::string;
  }
  phone_number_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CtrlReqSetMTCall::mutable_phone_number() {
  _set_bit(0);
  if (phone_number_ == &_default_phone_number_) {
    phone_number_ = new ::std::string;
  }
  return phone_number_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ril_proto

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ril_proto::CtrlCmd>() {
  return ril_proto::CtrlCmd_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ril_proto::CtrlStatus>() {
  return ril_proto::CtrlStatus_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ctrl_2eproto__INCLUDED