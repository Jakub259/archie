/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: control.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "control.pb-c.h"
void   archie__control__init
                     (Archie__Control         *message)
{
  static const Archie__Control init_value = ARCHIE__CONTROL__INIT;
  *message = init_value;
}
size_t archie__control__get_packed_size
                     (const Archie__Control *message)
{
  assert(message->base.descriptor == &archie__control__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t archie__control__pack
                     (const Archie__Control *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &archie__control__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t archie__control__pack_to_buffer
                     (const Archie__Control *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &archie__control__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Archie__Control *
       archie__control__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Archie__Control *)
     protobuf_c_message_unpack (&archie__control__descriptor,
                                allocator, len, data);
}
void   archie__control__free_unpacked
                     (Archie__Control *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &archie__control__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   archie__end_point__init
                     (Archie__EndPoint         *message)
{
  static const Archie__EndPoint init_value = ARCHIE__END_POINT__INIT;
  *message = init_value;
}
size_t archie__end_point__get_packed_size
                     (const Archie__EndPoint *message)
{
  assert(message->base.descriptor == &archie__end_point__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t archie__end_point__pack
                     (const Archie__EndPoint *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &archie__end_point__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t archie__end_point__pack_to_buffer
                     (const Archie__EndPoint *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &archie__end_point__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Archie__EndPoint *
       archie__end_point__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Archie__EndPoint *)
     protobuf_c_message_unpack (&archie__end_point__descriptor,
                                allocator, len, data);
}
void   archie__end_point__free_unpacked
                     (Archie__EndPoint *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &archie__end_point__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   archie__memory_dump__init
                     (Archie__MemoryDump         *message)
{
  static const Archie__MemoryDump init_value = ARCHIE__MEMORY_DUMP__INIT;
  *message = init_value;
}
size_t archie__memory_dump__get_packed_size
                     (const Archie__MemoryDump *message)
{
  assert(message->base.descriptor == &archie__memory_dump__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t archie__memory_dump__pack
                     (const Archie__MemoryDump *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &archie__memory_dump__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t archie__memory_dump__pack_to_buffer
                     (const Archie__MemoryDump *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &archie__memory_dump__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Archie__MemoryDump *
       archie__memory_dump__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Archie__MemoryDump *)
     protobuf_c_message_unpack (&archie__memory_dump__descriptor,
                                allocator, len, data);
}
void   archie__memory_dump__free_unpacked
                     (Archie__MemoryDump *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &archie__memory_dump__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor archie__control__field_descriptors[14] =
{
  {
    "max_duration",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, max_duration),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_faults",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, num_faults),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tb_exec_list",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, tb_exec_list),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tb_info",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, tb_info),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mem_info",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, mem_info),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "start_address",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, start_address),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "start_counter",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, start_counter),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "end_points",
    8,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Archie__Control, n_end_points),
    offsetof(Archie__Control, end_points),
    &archie__end_point__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tb_exec_list_ring_buffer",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, tb_exec_list_ring_buffer),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memorydumps",
    10,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Archie__Control, n_memorydumps),
    offsetof(Archie__Control, memorydumps),
    &archie__memory_dump__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "has_tb_exec_list",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, has_tb_exec_list),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "has_tb_info",
    12,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, has_tb_info),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "has_start",
    13,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, has_start),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "has_ring_buffer",
    14,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Archie__Control, has_ring_buffer),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned archie__control__field_indices_by_name[] = {
  7,   /* field[7] = end_points */
  13,   /* field[13] = has_ring_buffer */
  12,   /* field[12] = has_start */
  10,   /* field[10] = has_tb_exec_list */
  11,   /* field[11] = has_tb_info */
  0,   /* field[0] = max_duration */
  4,   /* field[4] = mem_info */
  9,   /* field[9] = memorydumps */
  1,   /* field[1] = num_faults */
  5,   /* field[5] = start_address */
  6,   /* field[6] = start_counter */
  2,   /* field[2] = tb_exec_list */
  8,   /* field[8] = tb_exec_list_ring_buffer */
  3,   /* field[3] = tb_info */
};
static const ProtobufCIntRange archie__control__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 14 }
};
const ProtobufCMessageDescriptor archie__control__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "archie.Control",
  "Control",
  "Archie__Control",
  "archie",
  sizeof(Archie__Control),
  14,
  archie__control__field_descriptors,
  archie__control__field_indices_by_name,
  1,  archie__control__number_ranges,
  (ProtobufCMessageInit) archie__control__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor archie__end_point__field_descriptors[2] =
{
  {
    "address",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Archie__EndPoint, address),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "counter",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Archie__EndPoint, counter),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned archie__end_point__field_indices_by_name[] = {
  0,   /* field[0] = address */
  1,   /* field[1] = counter */
};
static const ProtobufCIntRange archie__end_point__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor archie__end_point__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "archie.EndPoint",
  "EndPoint",
  "Archie__EndPoint",
  "archie",
  sizeof(Archie__EndPoint),
  2,
  archie__end_point__field_descriptors,
  archie__end_point__field_indices_by_name,
  1,  archie__end_point__number_ranges,
  (ProtobufCMessageInit) archie__end_point__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor archie__memory_dump__field_descriptors[2] =
{
  {
    "address",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Archie__MemoryDump, address),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "length",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Archie__MemoryDump, length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned archie__memory_dump__field_indices_by_name[] = {
  0,   /* field[0] = address */
  1,   /* field[1] = length */
};
static const ProtobufCIntRange archie__memory_dump__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor archie__memory_dump__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "archie.MemoryDump",
  "MemoryDump",
  "Archie__MemoryDump",
  "archie",
  sizeof(Archie__MemoryDump),
  2,
  archie__memory_dump__field_descriptors,
  archie__memory_dump__field_indices_by_name,
  1,  archie__memory_dump__number_ranges,
  (ProtobufCMessageInit) archie__memory_dump__init,
  NULL,NULL,NULL    /* reserved[123] */
};
