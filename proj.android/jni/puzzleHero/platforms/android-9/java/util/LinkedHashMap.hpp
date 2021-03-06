/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.LinkedHashMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LINKEDHASHMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_LINKEDHASHMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class AbstractMap; } } }
namespace j2cpp { namespace java { namespace util { class HashMap; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace util {

	class LinkedHashMap;
	class LinkedHashMap
		: public object<LinkedHashMap>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)

		explicit LinkedHashMap(jobject jobj)
		: object<LinkedHashMap>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::AbstractMap>() const;
		operator local_ref<java::util::HashMap>() const;
		operator local_ref<java::util::Map>() const;
		operator local_ref<java::io::Serializable>() const;


		LinkedHashMap();
		LinkedHashMap(jint);
		LinkedHashMap(jint, jfloat);
		LinkedHashMap(jint, jfloat, jboolean);
		LinkedHashMap(local_ref< java::util::Map > const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		jboolean containsValue(local_ref< java::lang::Object >  const&);
		void clear();
	}; //class LinkedHashMap

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LINKEDHASHMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LINKEDHASHMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_LINKEDHASHMAP_HPP_IMPL

namespace j2cpp {



java::util::LinkedHashMap::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::LinkedHashMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::LinkedHashMap::operator local_ref<java::util::AbstractMap>() const
{
	return local_ref<java::util::AbstractMap>(get_jobject());
}

java::util::LinkedHashMap::operator local_ref<java::util::HashMap>() const
{
	return local_ref<java::util::HashMap>(get_jobject());
}

java::util::LinkedHashMap::operator local_ref<java::util::Map>() const
{
	return local_ref<java::util::Map>(get_jobject());
}

java::util::LinkedHashMap::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::LinkedHashMap::LinkedHashMap()
: object<java::util::LinkedHashMap>(
	call_new_object<
		java::util::LinkedHashMap::J2CPP_CLASS_NAME,
		java::util::LinkedHashMap::J2CPP_METHOD_NAME(0),
		java::util::LinkedHashMap::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::LinkedHashMap::LinkedHashMap(jint a0)
: object<java::util::LinkedHashMap>(
	call_new_object<
		java::util::LinkedHashMap::J2CPP_CLASS_NAME,
		java::util::LinkedHashMap::J2CPP_METHOD_NAME(1),
		java::util::LinkedHashMap::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::LinkedHashMap::LinkedHashMap(jint a0, jfloat a1)
: object<java::util::LinkedHashMap>(
	call_new_object<
		java::util::LinkedHashMap::J2CPP_CLASS_NAME,
		java::util::LinkedHashMap::J2CPP_METHOD_NAME(2),
		java::util::LinkedHashMap::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::util::LinkedHashMap::LinkedHashMap(jint a0, jfloat a1, jboolean a2)
: object<java::util::LinkedHashMap>(
	call_new_object<
		java::util::LinkedHashMap::J2CPP_CLASS_NAME,
		java::util::LinkedHashMap::J2CPP_METHOD_NAME(3),
		java::util::LinkedHashMap::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1, a2)
)
{
}



java::util::LinkedHashMap::LinkedHashMap(local_ref< java::util::Map > const &a0)
: object<java::util::LinkedHashMap>(
	call_new_object<
		java::util::LinkedHashMap::J2CPP_CLASS_NAME,
		java::util::LinkedHashMap::J2CPP_METHOD_NAME(4),
		java::util::LinkedHashMap::J2CPP_METHOD_SIGNATURE(4)
	>(a0)
)
{
}


local_ref< java::lang::Object > java::util::LinkedHashMap::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedHashMap::J2CPP_CLASS_NAME,
		java::util::LinkedHashMap::J2CPP_METHOD_NAME(5),
		java::util::LinkedHashMap::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean java::util::LinkedHashMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedHashMap::J2CPP_CLASS_NAME,
		java::util::LinkedHashMap::J2CPP_METHOD_NAME(6),
		java::util::LinkedHashMap::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::LinkedHashMap::clear()
{
	return call_method<
		java::util::LinkedHashMap::J2CPP_CLASS_NAME,
		java::util::LinkedHashMap::J2CPP_METHOD_NAME(7),
		java::util::LinkedHashMap::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::util::LinkedHashMap,"java/util/LinkedHashMap")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,2,"<init>","(IF)V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,3,"<init>","(IFZ)V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,4,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,5,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,6,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,7,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashMap,8,"removeEldestEntry","(Ljava/util/Map$Entry;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LINKEDHASHMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
