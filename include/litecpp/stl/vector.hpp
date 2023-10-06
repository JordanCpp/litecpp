#ifndef litecpp_stl_vector_hpp
#define litecpp_stl_vector_hpp

#include <stddef.h>
#include <new>

namespace std
{
	template <typename T>
	class vector
	{
	public:
		vector() :
			_capacity(0),
			_position(0),
			_content(0)
		{
		}

		vector(size_t count) :
			_capacity(count),
			_position(count),
			_content(0)
		{
			_content = new T[_capacity];

			for (size_t i = 0; i < _capacity; i++)
			{
				_content[i] = T();
			}
		}

		size_t capacity()
		{
			return _capacity;
		}

		size_t size()
		{
			return _position;
		}

		T& operator[](size_t index)
		{
			return _content[index];
		}
		
		void reserve(size_t size)
		{
			if (size > _capacity)
			{
				T* p = new T[size];

				for (size_t i = 0; i < _position; i++)
				{
					p[i] = _content[i];
				}

				if (_content != NULL)
				{
					delete[] _content;
				}

				_content = p;

				_capacity = size;
			}
		}

		void resize(size_t newsize)
		{
			reserve(newsize);

			_position = newsize;
		}
		
		void resize(size_t newsize, T val)
		{
			reserve(newsize);

			for (size_t i = _position; i < newsize; i++)
			{
				_content[i] = T();
			}

			_position = newsize;
		}

		void push_back(const T& value)
		{
			if (_capacity == 0)
			{
				reserve(8);
			}
			else if (_position == _capacity)
			{
				reserve(2 * _capacity);
			}

			_content[_position] = value;

			_position++;
		}

		const T* data() const
		{
			return _content;
		}
	private:
		size_t _capacity;
		size_t _position;
		T* _content;
	};
}

#endif  