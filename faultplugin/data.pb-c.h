/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: data.proto */

#ifndef PROTOBUF_C_data_2eproto__INCLUDED
#define PROTOBUF_C_data_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Archie__Data Archie__Data;
typedef struct Archie__TbInformation Archie__TbInformation;
typedef struct Archie__TbExecOrder Archie__TbExecOrder;
typedef struct Archie__MemInfo Archie__MemInfo;
typedef struct Archie__MemDumpInfo Archie__MemDumpInfo;
typedef struct Archie__MemDump Archie__MemDump;
typedef struct Archie__RegisterInfo Archie__RegisterInfo;
typedef struct Archie__RegisterDump Archie__RegisterDump;
typedef struct Archie__FaultedData Archie__FaultedData;


/* --- enums --- */


/* --- messages --- */

struct  Archie__Data
{
  ProtobufCMessage base;
  int32_t end_point;
  char *end_reason;
  size_t n_tb_informations;
  Archie__TbInformation **tb_informations;
  size_t n_tb_exec_orders;
  Archie__TbExecOrder **tb_exec_orders;
  size_t n_mem_infos;
  Archie__MemInfo **mem_infos;
  Archie__RegisterInfo *register_info;
  size_t n_faulted_datas;
  Archie__FaultedData **faulted_datas;
  size_t n_mem_dump_infos;
  Archie__MemDumpInfo **mem_dump_infos;
};
#define ARCHIE__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__data__descriptor) \
    , 0, (char *)protobuf_c_empty_string, 0,NULL, 0,NULL, 0,NULL, NULL, 0,NULL, 0,NULL }


struct  Archie__TbInformation
{
  ProtobufCMessage base;
  uint64_t base_address;
  uint64_t size;
  uint64_t instruction_count;
  uint64_t num_of_exec;
  char *assembler;
};
#define ARCHIE__TB_INFORMATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__tb_information__descriptor) \
    , 0, 0, 0, 0, (char *)protobuf_c_empty_string }


struct  Archie__TbExecOrder
{
  ProtobufCMessage base;
  uint64_t tb_base_address;
  uint64_t pos;
};
#define ARCHIE__TB_EXEC_ORDER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__tb_exec_order__descriptor) \
    , 0, 0 }


struct  Archie__MemInfo
{
  ProtobufCMessage base;
  uint64_t ins_address;
  uint64_t size;
  uint64_t memmory_address;
  uint32_t direction;
  uint64_t counter;
};
#define ARCHIE__MEM_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__mem_info__descriptor) \
    , 0, 0, 0, 0, 0 }


struct  Archie__MemDumpInfo
{
  ProtobufCMessage base;
  uint64_t address;
  uint64_t len;
  size_t n_dumps;
  Archie__MemDump **dumps;
};
#define ARCHIE__MEM_DUMP_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__mem_dump_info__descriptor) \
    , 0, 0, 0,NULL }


struct  Archie__MemDump
{
  ProtobufCMessage base;
  ProtobufCBinaryData mem;
};
#define ARCHIE__MEM_DUMP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__mem_dump__descriptor) \
    , {0,NULL} }


/*
 * Type 0 = ARM
 * Type 1 = RISCV
 */
struct  Archie__RegisterInfo
{
  ProtobufCMessage base;
  size_t n_register_dumps;
  Archie__RegisterDump **register_dumps;
  uint32_t arch_type;
};
#define ARCHIE__REGISTER_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__register_info__descriptor) \
    , 0,NULL, 0 }


struct  Archie__RegisterDump
{
  ProtobufCMessage base;
  size_t n_register_values;
  uint64_t *register_values;
  uint64_t pc;
  uint64_t tb_count;
};
#define ARCHIE__REGISTER_DUMP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__register_dump__descriptor) \
    , 0,NULL, 0, 0 }


struct  Archie__FaultedData
{
  ProtobufCMessage base;
  uint64_t trigger_address;
  char *assembler;
};
#define ARCHIE__FAULTED_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__faulted_data__descriptor) \
    , 0, (char *)protobuf_c_empty_string }


/* Archie__Data methods */
void   archie__data__init
                     (Archie__Data         *message);
size_t archie__data__get_packed_size
                     (const Archie__Data   *message);
size_t archie__data__pack
                     (const Archie__Data   *message,
                      uint8_t             *out);
size_t archie__data__pack_to_buffer
                     (const Archie__Data   *message,
                      ProtobufCBuffer     *buffer);
Archie__Data *
       archie__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__data__free_unpacked
                     (Archie__Data *message,
                      ProtobufCAllocator *allocator);
/* Archie__TbInformation methods */
void   archie__tb_information__init
                     (Archie__TbInformation         *message);
size_t archie__tb_information__get_packed_size
                     (const Archie__TbInformation   *message);
size_t archie__tb_information__pack
                     (const Archie__TbInformation   *message,
                      uint8_t             *out);
size_t archie__tb_information__pack_to_buffer
                     (const Archie__TbInformation   *message,
                      ProtobufCBuffer     *buffer);
Archie__TbInformation *
       archie__tb_information__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__tb_information__free_unpacked
                     (Archie__TbInformation *message,
                      ProtobufCAllocator *allocator);
/* Archie__TbExecOrder methods */
void   archie__tb_exec_order__init
                     (Archie__TbExecOrder         *message);
size_t archie__tb_exec_order__get_packed_size
                     (const Archie__TbExecOrder   *message);
size_t archie__tb_exec_order__pack
                     (const Archie__TbExecOrder   *message,
                      uint8_t             *out);
size_t archie__tb_exec_order__pack_to_buffer
                     (const Archie__TbExecOrder   *message,
                      ProtobufCBuffer     *buffer);
Archie__TbExecOrder *
       archie__tb_exec_order__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__tb_exec_order__free_unpacked
                     (Archie__TbExecOrder *message,
                      ProtobufCAllocator *allocator);
/* Archie__MemInfo methods */
void   archie__mem_info__init
                     (Archie__MemInfo         *message);
size_t archie__mem_info__get_packed_size
                     (const Archie__MemInfo   *message);
size_t archie__mem_info__pack
                     (const Archie__MemInfo   *message,
                      uint8_t             *out);
size_t archie__mem_info__pack_to_buffer
                     (const Archie__MemInfo   *message,
                      ProtobufCBuffer     *buffer);
Archie__MemInfo *
       archie__mem_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__mem_info__free_unpacked
                     (Archie__MemInfo *message,
                      ProtobufCAllocator *allocator);
/* Archie__MemDumpInfo methods */
void   archie__mem_dump_info__init
                     (Archie__MemDumpInfo         *message);
size_t archie__mem_dump_info__get_packed_size
                     (const Archie__MemDumpInfo   *message);
size_t archie__mem_dump_info__pack
                     (const Archie__MemDumpInfo   *message,
                      uint8_t             *out);
size_t archie__mem_dump_info__pack_to_buffer
                     (const Archie__MemDumpInfo   *message,
                      ProtobufCBuffer     *buffer);
Archie__MemDumpInfo *
       archie__mem_dump_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__mem_dump_info__free_unpacked
                     (Archie__MemDumpInfo *message,
                      ProtobufCAllocator *allocator);
/* Archie__MemDump methods */
void   archie__mem_dump__init
                     (Archie__MemDump         *message);
size_t archie__mem_dump__get_packed_size
                     (const Archie__MemDump   *message);
size_t archie__mem_dump__pack
                     (const Archie__MemDump   *message,
                      uint8_t             *out);
size_t archie__mem_dump__pack_to_buffer
                     (const Archie__MemDump   *message,
                      ProtobufCBuffer     *buffer);
Archie__MemDump *
       archie__mem_dump__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__mem_dump__free_unpacked
                     (Archie__MemDump *message,
                      ProtobufCAllocator *allocator);
/* Archie__RegisterInfo methods */
void   archie__register_info__init
                     (Archie__RegisterInfo         *message);
size_t archie__register_info__get_packed_size
                     (const Archie__RegisterInfo   *message);
size_t archie__register_info__pack
                     (const Archie__RegisterInfo   *message,
                      uint8_t             *out);
size_t archie__register_info__pack_to_buffer
                     (const Archie__RegisterInfo   *message,
                      ProtobufCBuffer     *buffer);
Archie__RegisterInfo *
       archie__register_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__register_info__free_unpacked
                     (Archie__RegisterInfo *message,
                      ProtobufCAllocator *allocator);
/* Archie__RegisterDump methods */
void   archie__register_dump__init
                     (Archie__RegisterDump         *message);
size_t archie__register_dump__get_packed_size
                     (const Archie__RegisterDump   *message);
size_t archie__register_dump__pack
                     (const Archie__RegisterDump   *message,
                      uint8_t             *out);
size_t archie__register_dump__pack_to_buffer
                     (const Archie__RegisterDump   *message,
                      ProtobufCBuffer     *buffer);
Archie__RegisterDump *
       archie__register_dump__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__register_dump__free_unpacked
                     (Archie__RegisterDump *message,
                      ProtobufCAllocator *allocator);
/* Archie__FaultedData methods */
void   archie__faulted_data__init
                     (Archie__FaultedData         *message);
size_t archie__faulted_data__get_packed_size
                     (const Archie__FaultedData   *message);
size_t archie__faulted_data__pack
                     (const Archie__FaultedData   *message,
                      uint8_t             *out);
size_t archie__faulted_data__pack_to_buffer
                     (const Archie__FaultedData   *message,
                      ProtobufCBuffer     *buffer);
Archie__FaultedData *
       archie__faulted_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__faulted_data__free_unpacked
                     (Archie__FaultedData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Archie__Data_Closure)
                 (const Archie__Data *message,
                  void *closure_data);
typedef void (*Archie__TbInformation_Closure)
                 (const Archie__TbInformation *message,
                  void *closure_data);
typedef void (*Archie__TbExecOrder_Closure)
                 (const Archie__TbExecOrder *message,
                  void *closure_data);
typedef void (*Archie__MemInfo_Closure)
                 (const Archie__MemInfo *message,
                  void *closure_data);
typedef void (*Archie__MemDumpInfo_Closure)
                 (const Archie__MemDumpInfo *message,
                  void *closure_data);
typedef void (*Archie__MemDump_Closure)
                 (const Archie__MemDump *message,
                  void *closure_data);
typedef void (*Archie__RegisterInfo_Closure)
                 (const Archie__RegisterInfo *message,
                  void *closure_data);
typedef void (*Archie__RegisterDump_Closure)
                 (const Archie__RegisterDump *message,
                  void *closure_data);
typedef void (*Archie__FaultedData_Closure)
                 (const Archie__FaultedData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor archie__data__descriptor;
extern const ProtobufCMessageDescriptor archie__tb_information__descriptor;
extern const ProtobufCMessageDescriptor archie__tb_exec_order__descriptor;
extern const ProtobufCMessageDescriptor archie__mem_info__descriptor;
extern const ProtobufCMessageDescriptor archie__mem_dump_info__descriptor;
extern const ProtobufCMessageDescriptor archie__mem_dump__descriptor;
extern const ProtobufCMessageDescriptor archie__register_info__descriptor;
extern const ProtobufCMessageDescriptor archie__register_dump__descriptor;
extern const ProtobufCMessageDescriptor archie__faulted_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_data_2eproto__INCLUDED */
