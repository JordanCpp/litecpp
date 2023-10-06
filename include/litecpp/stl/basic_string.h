#ifndef litecpp_stl_basic_string_h
#define litecpp_stl_basic_string_h

#include <stddef.h>
#include <string.h>
#include <new>

namespace std
{
	template <typename T>
	class basic_string
	{
	public:
		~basic_string()
		{
			if (_content != NULL)
			{
				delete[] _content;
			}
		}

		basic_string() :
			_capacity(0),
			_position(0),
			_content(0)
		{
		}

		basic_string(const T * source) :
			_capacity(0),
			_position(0),
			_content(0)
		{
			_position = strlen(source);
			_capacity = _position + 1;
			_content = new T[_capacity];

			memcpy(_content, source, _position);

			_content[_position] = 0;
		}

		size_t capacity()
		{
			return _capacity;
		}

		size_t size()
		{
			return _position;
		}

		const T* c_str()
		{
			return _content;
		}

		void reserve(size_t size)
		{
			if (size >= _capacity)
			{
				T* tmp = new T[size + 1];
				memcpy(tmp, _content, size);
				delete[] _content;
				_content = tmp;
				_capacity = size + 1;
			}
			else
			{
				_position = size;
			}

			_content[_position] = 0;
		}
	private:
		size_t _capacity;
		size_t _position;
		T*     _content;
	};
}

#endif 