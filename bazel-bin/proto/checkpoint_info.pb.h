// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/checkpoint_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fcheckpoint_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fcheckpoint_5finfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fcheckpoint_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fcheckpoint_5finfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcheckpoint_5finfo_2eproto;
namespace resdb {
class CheckPointData;
struct CheckPointDataDefaultTypeInternal;
extern CheckPointDataDefaultTypeInternal _CheckPointData_default_instance_;
class HashInfo;
struct HashInfoDefaultTypeInternal;
extern HashInfoDefaultTypeInternal _HashInfo_default_instance_;
}  // namespace resdb
PROTOBUF_NAMESPACE_OPEN
template<> ::resdb::CheckPointData* Arena::CreateMaybeMessage<::resdb::CheckPointData>(Arena*);
template<> ::resdb::HashInfo* Arena::CreateMaybeMessage<::resdb::HashInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace resdb {

// ===================================================================

class HashInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:resdb.HashInfo) */ {
 public:
  inline HashInfo() : HashInfo(nullptr) {}
  ~HashInfo() override;
  explicit constexpr HashInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HashInfo(const HashInfo& from);
  HashInfo(HashInfo&& from) noexcept
    : HashInfo() {
    *this = ::std::move(from);
  }

  inline HashInfo& operator=(const HashInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline HashInfo& operator=(HashInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HashInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const HashInfo* internal_default_instance() {
    return reinterpret_cast<const HashInfo*>(
               &_HashInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HashInfo& a, HashInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(HashInfo* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HashInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline HashInfo* New() const final {
    return new HashInfo();
  }

  HashInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<HashInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const HashInfo& from);
  void MergeFrom(const HashInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HashInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "resdb.HashInfo";
  }
  protected:
  explicit HashInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLastHashFieldNumber = 1,
    kCurrentHashFieldNumber = 2,
    kLastBlockHashFieldNumber = 3,
  };
  // bytes last_hash = 1;
  void clear_last_hash();
  const std::string& last_hash() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_last_hash(ArgT0&& arg0, ArgT... args);
  std::string* mutable_last_hash();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_last_hash();
  void set_allocated_last_hash(std::string* last_hash);
  private:
  const std::string& _internal_last_hash() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_last_hash(const std::string& value);
  std::string* _internal_mutable_last_hash();
  public:

  // bytes current_hash = 2;
  void clear_current_hash();
  const std::string& current_hash() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_current_hash(ArgT0&& arg0, ArgT... args);
  std::string* mutable_current_hash();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_current_hash();
  void set_allocated_current_hash(std::string* current_hash);
  private:
  const std::string& _internal_current_hash() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_current_hash(const std::string& value);
  std::string* _internal_mutable_current_hash();
  public:

  // bytes last_block_hash = 3;
  void clear_last_block_hash();
  const std::string& last_block_hash() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_last_block_hash(ArgT0&& arg0, ArgT... args);
  std::string* mutable_last_block_hash();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_last_block_hash();
  void set_allocated_last_block_hash(std::string* last_block_hash);
  private:
  const std::string& _internal_last_block_hash() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_last_block_hash(const std::string& value);
  std::string* _internal_mutable_last_block_hash();
  public:

  // @@protoc_insertion_point(class_scope:resdb.HashInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr last_hash_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr current_hash_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr last_block_hash_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcheckpoint_5finfo_2eproto;
};
// -------------------------------------------------------------------

class CheckPointData final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:resdb.CheckPointData) */ {
 public:
  inline CheckPointData() : CheckPointData(nullptr) {}
  ~CheckPointData() override;
  explicit constexpr CheckPointData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CheckPointData(const CheckPointData& from);
  CheckPointData(CheckPointData&& from) noexcept
    : CheckPointData() {
    *this = ::std::move(from);
  }

  inline CheckPointData& operator=(const CheckPointData& from) {
    CopyFrom(from);
    return *this;
  }
  inline CheckPointData& operator=(CheckPointData&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CheckPointData& default_instance() {
    return *internal_default_instance();
  }
  static inline const CheckPointData* internal_default_instance() {
    return reinterpret_cast<const CheckPointData*>(
               &_CheckPointData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CheckPointData& a, CheckPointData& b) {
    a.Swap(&b);
  }
  inline void Swap(CheckPointData* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CheckPointData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CheckPointData* New() const final {
    return new CheckPointData();
  }

  CheckPointData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CheckPointData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CheckPointData& from);
  void MergeFrom(const CheckPointData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CheckPointData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "resdb.CheckPointData";
  }
  protected:
  explicit CheckPointData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHashFieldNumber = 2,
    kSeqFieldNumber = 1,
  };
  // bytes hash = 2;
  void clear_hash();
  const std::string& hash() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_hash(ArgT0&& arg0, ArgT... args);
  std::string* mutable_hash();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_hash();
  void set_allocated_hash(std::string* hash);
  private:
  const std::string& _internal_hash() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_hash(const std::string& value);
  std::string* _internal_mutable_hash();
  public:

  // uint64 seq = 1;
  void clear_seq();
  ::PROTOBUF_NAMESPACE_ID::uint64 seq() const;
  void set_seq(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_seq() const;
  void _internal_set_seq(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:resdb.CheckPointData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr hash_;
  ::PROTOBUF_NAMESPACE_ID::uint64 seq_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcheckpoint_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HashInfo

// bytes last_hash = 1;
inline void HashInfo::clear_last_hash() {
  last_hash_.ClearToEmpty();
}
inline const std::string& HashInfo::last_hash() const {
  // @@protoc_insertion_point(field_get:resdb.HashInfo.last_hash)
  return _internal_last_hash();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HashInfo::set_last_hash(ArgT0&& arg0, ArgT... args) {
 
 last_hash_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:resdb.HashInfo.last_hash)
}
inline std::string* HashInfo::mutable_last_hash() {
  // @@protoc_insertion_point(field_mutable:resdb.HashInfo.last_hash)
  return _internal_mutable_last_hash();
}
inline const std::string& HashInfo::_internal_last_hash() const {
  return last_hash_.Get();
}
inline void HashInfo::_internal_set_last_hash(const std::string& value) {
  
  last_hash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* HashInfo::_internal_mutable_last_hash() {
  
  return last_hash_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* HashInfo::release_last_hash() {
  // @@protoc_insertion_point(field_release:resdb.HashInfo.last_hash)
  return last_hash_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void HashInfo::set_allocated_last_hash(std::string* last_hash) {
  if (last_hash != nullptr) {
    
  } else {
    
  }
  last_hash_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), last_hash,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:resdb.HashInfo.last_hash)
}

// bytes current_hash = 2;
inline void HashInfo::clear_current_hash() {
  current_hash_.ClearToEmpty();
}
inline const std::string& HashInfo::current_hash() const {
  // @@protoc_insertion_point(field_get:resdb.HashInfo.current_hash)
  return _internal_current_hash();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HashInfo::set_current_hash(ArgT0&& arg0, ArgT... args) {
 
 current_hash_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:resdb.HashInfo.current_hash)
}
inline std::string* HashInfo::mutable_current_hash() {
  // @@protoc_insertion_point(field_mutable:resdb.HashInfo.current_hash)
  return _internal_mutable_current_hash();
}
inline const std::string& HashInfo::_internal_current_hash() const {
  return current_hash_.Get();
}
inline void HashInfo::_internal_set_current_hash(const std::string& value) {
  
  current_hash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* HashInfo::_internal_mutable_current_hash() {
  
  return current_hash_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* HashInfo::release_current_hash() {
  // @@protoc_insertion_point(field_release:resdb.HashInfo.current_hash)
  return current_hash_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void HashInfo::set_allocated_current_hash(std::string* current_hash) {
  if (current_hash != nullptr) {
    
  } else {
    
  }
  current_hash_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), current_hash,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:resdb.HashInfo.current_hash)
}

// bytes last_block_hash = 3;
inline void HashInfo::clear_last_block_hash() {
  last_block_hash_.ClearToEmpty();
}
inline const std::string& HashInfo::last_block_hash() const {
  // @@protoc_insertion_point(field_get:resdb.HashInfo.last_block_hash)
  return _internal_last_block_hash();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HashInfo::set_last_block_hash(ArgT0&& arg0, ArgT... args) {
 
 last_block_hash_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:resdb.HashInfo.last_block_hash)
}
inline std::string* HashInfo::mutable_last_block_hash() {
  // @@protoc_insertion_point(field_mutable:resdb.HashInfo.last_block_hash)
  return _internal_mutable_last_block_hash();
}
inline const std::string& HashInfo::_internal_last_block_hash() const {
  return last_block_hash_.Get();
}
inline void HashInfo::_internal_set_last_block_hash(const std::string& value) {
  
  last_block_hash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* HashInfo::_internal_mutable_last_block_hash() {
  
  return last_block_hash_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* HashInfo::release_last_block_hash() {
  // @@protoc_insertion_point(field_release:resdb.HashInfo.last_block_hash)
  return last_block_hash_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void HashInfo::set_allocated_last_block_hash(std::string* last_block_hash) {
  if (last_block_hash != nullptr) {
    
  } else {
    
  }
  last_block_hash_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), last_block_hash,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:resdb.HashInfo.last_block_hash)
}

// -------------------------------------------------------------------

// CheckPointData

// uint64 seq = 1;
inline void CheckPointData::clear_seq() {
  seq_ = uint64_t{0u};
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 CheckPointData::_internal_seq() const {
  return seq_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 CheckPointData::seq() const {
  // @@protoc_insertion_point(field_get:resdb.CheckPointData.seq)
  return _internal_seq();
}
inline void CheckPointData::_internal_set_seq(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  seq_ = value;
}
inline void CheckPointData::set_seq(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_seq(value);
  // @@protoc_insertion_point(field_set:resdb.CheckPointData.seq)
}

// bytes hash = 2;
inline void CheckPointData::clear_hash() {
  hash_.ClearToEmpty();
}
inline const std::string& CheckPointData::hash() const {
  // @@protoc_insertion_point(field_get:resdb.CheckPointData.hash)
  return _internal_hash();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CheckPointData::set_hash(ArgT0&& arg0, ArgT... args) {
 
 hash_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:resdb.CheckPointData.hash)
}
inline std::string* CheckPointData::mutable_hash() {
  // @@protoc_insertion_point(field_mutable:resdb.CheckPointData.hash)
  return _internal_mutable_hash();
}
inline const std::string& CheckPointData::_internal_hash() const {
  return hash_.Get();
}
inline void CheckPointData::_internal_set_hash(const std::string& value) {
  
  hash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* CheckPointData::_internal_mutable_hash() {
  
  return hash_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* CheckPointData::release_hash() {
  // @@protoc_insertion_point(field_release:resdb.CheckPointData.hash)
  return hash_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void CheckPointData::set_allocated_hash(std::string* hash) {
  if (hash != nullptr) {
    
  } else {
    
  }
  hash_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), hash,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:resdb.CheckPointData.hash)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace resdb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fcheckpoint_5finfo_2eproto