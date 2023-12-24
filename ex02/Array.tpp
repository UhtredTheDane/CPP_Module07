template<typename T>
Array<T>::Array(void)
	: ptr(NULL),
	length(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n)
	: ptr(new T[n]),
	length(n)
{
}

template<typename T>
Array<T>::Array(Array<T> const& toCopy)
	: ptr(new T[toCopy.length]), 
	length(toCopy.length)
{
	for (unsigned int i = 0; i < length; ++i)
		ptr[i] = toCopy.ptr[i];

}

template<typename T>
Array<T>::~Array(void)
{
	delete [] ptr;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& toAffect)
{
	if (this != &toAffect)
	{
		delete [] ptr;
		length = toAffect.length;
		ptr = new T[length];
		for (unsigned int i = 0; i < length; ++i)
			ptr[i] = toAffect.ptr[i];
	}
	return (*this);
}

template<typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || static_cast<unsigned int>(index) >= length)
		throw (std::out_of_range(std::string("Index out of range")));
	return (*(ptr + index));
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (length);
}
