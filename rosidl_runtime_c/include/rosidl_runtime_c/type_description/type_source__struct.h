// DO NOT EDIT MANUALLY - this copied file managed by copy_type_description_generated_sources.bash
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from type_description_interfaces:msg/TypeSource.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_RUNTIME_C__TYPE_DESCRIPTION__TYPE_SOURCE__STRUCT_H_
#define ROSIDL_RUNTIME_C__TYPE_DESCRIPTION__TYPE_SOURCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t rosidl_runtime_c__type_description__TypeSource__TYPE_HASH = {1, {
    0xfa, 0xea, 0xec, 0x75, 0x96, 0xc0, 0x4e, 0xcf,
    0x5b, 0x6e, 0x99, 0xad, 0x22, 0x5e, 0x4c, 0x7c,
    0xbb, 0x99, 0x7a, 0xd5, 0x43, 0x5f, 0x79, 0x35,
    0x26, 0xfb, 0x39, 0x84, 0xd0, 0x11, 0xaa, 0xe5,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'type_name'
// Member 'encoding'
// Member 'raw_file_contents'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TypeSource in the package type_description_interfaces.
/**
  * Represents the original source of a ROS 2 interface definition.
 */
typedef struct rosidl_runtime_c__type_description__TypeSource
{
  /// ROS interface type name, in PACKAGE/NAMESPACE/TYPENAME format.
  rosidl_runtime_c__String type_name;
  /// The type of the original source file, typically matching the file extension.
  /// Well-known encodings: "idl", "msg", "srv", "action", "dynamic", "implicit".
  /// "dynamic" specifies a type created programmatically by a user, thus having no source.
  /// "implicit" specifies a type created automatically as a subtype of a
  /// complex type (service or action) - such as the request message for a service.
  /// Implicit types will have no contents, the full source will be available on the parent srv/action.
  rosidl_runtime_c__String encoding;
  /// Dumped contents of the interface definition source file.
  /// If `encoding` is "dynamic" or "implicit", this field will be empty.
  rosidl_runtime_c__String raw_file_contents;
} rosidl_runtime_c__type_description__TypeSource;

// Struct for a sequence of rosidl_runtime_c__type_description__TypeSource.
typedef struct rosidl_runtime_c__type_description__TypeSource__Sequence
{
  rosidl_runtime_c__type_description__TypeSource * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_runtime_c__type_description__TypeSource__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_RUNTIME_C__TYPE_DESCRIPTION__TYPE_SOURCE__STRUCT_H_
