# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: test.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import telemetry_top_pb2 as telemetry__top__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='test.proto',
  package='',
  syntax='proto2',
  serialized_pb=b'\n\ntest.proto\x1a\x13telemetry_top.proto\"(\n\x04Test\x12 \n\ntest_stats\x18\x01 \x03(\x0b\x32\x0c.TestElement\"\'\n\x0bTestElement\x12\n\n\x02id\x18\x01 \x02(\r\x12\x0c\n\x04name\x18\x02 \x02(\t:6\n\rjnpr_test_ext\x12\x17.JuniperNetworksSensors\x18\x90\x03 \x01(\x0b\x32\x05.Test'
  ,
  dependencies=[telemetry__top__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


JNPR_TEST_EXT_FIELD_NUMBER = 400
jnpr_test_ext = _descriptor.FieldDescriptor(
  name='jnpr_test_ext', full_name='jnpr_test_ext', index=0,
  number=400, type=11, cpp_type=10, label=1,
  has_default_value=False, default_value=None,
  message_type=None, enum_type=None, containing_type=None,
  is_extension=True, extension_scope=None,
  options=None)


_TEST = _descriptor.Descriptor(
  name='Test',
  full_name='Test',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='test_stats', full_name='Test.test_stats', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=35,
  serialized_end=75,
)


_TESTELEMENT = _descriptor.Descriptor(
  name='TestElement',
  full_name='TestElement',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='TestElement.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='name', full_name='TestElement.name', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=77,
  serialized_end=116,
)

_TEST.fields_by_name['test_stats'].message_type = _TESTELEMENT
DESCRIPTOR.message_types_by_name['Test'] = _TEST
DESCRIPTOR.message_types_by_name['TestElement'] = _TESTELEMENT
DESCRIPTOR.extensions_by_name['jnpr_test_ext'] = jnpr_test_ext

Test = _reflection.GeneratedProtocolMessageType('Test', (_message.Message,), dict(
  DESCRIPTOR = _TEST,
  __module__ = 'test_pb2'
  # @@protoc_insertion_point(class_scope:Test)
  ))
_sym_db.RegisterMessage(Test)

TestElement = _reflection.GeneratedProtocolMessageType('TestElement', (_message.Message,), dict(
  DESCRIPTOR = _TESTELEMENT,
  __module__ = 'test_pb2'
  # @@protoc_insertion_point(class_scope:TestElement)
  ))
_sym_db.RegisterMessage(TestElement)

jnpr_test_ext.message_type = _TEST
telemetry__top__pb2.JuniperNetworksSensors.RegisterExtension(jnpr_test_ext)

# @@protoc_insertion_point(module_scope)
