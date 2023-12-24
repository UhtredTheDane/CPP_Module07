
template<class T>
Array<T>::Array(void)
	: ptr(NULL),
	length(0)
{
}

template<class T>
Array<T>::Array(unsigned int n)
	: ptr(new T[n]),
	length(n)
{
}

template<class T>
Array<T>::Array(Array<T> const& toCopy)
	: ptr(new T[toCopy.length]), 
	length(toCopy.length)
{
	for (unsigned int i = 0; i < length; ++i)
		ptr[i] = toCopy[i];

}

template<class T>
Array<T>::~Array(void)
{
	delete [] ptr;
}

template<class T>
Array<T>& Array<T>::operator=(Array<T> const& toAffect)
{
	if (this != &toAffect)
	{
		delete [] ptr;
		length = toAffect.length;
		ptr = new T[length];
		for (unsigned int i = 0; i < length; ++i)
			ptr[i] = toAffect[i];
	}
	return (*this);
}

template<typename T>
T& Array<T>::operator[](int index) const
{
	if (index < 0 || index >= static_cast<int>(length))
		throw (std::out_of_range(std::string("Index out of range")));
	return (*(ptr + index));
}

template<class T>
unsigned int Array<T>::size() const
{
	return (length);
}
