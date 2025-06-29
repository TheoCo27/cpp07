/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 00:48:28 by theog             #+#    #+#             */
/*   Updated: 2025/06/29 01:54:24 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <cstdlib>

template <typename T>
class Array
{
    private:
        T* _array;
        size_t _array_len;
    public:
        Array<T>(){
            _array = new T[0]
            _array_len(0);
        }
        Array<T>(unsigned int n)
        {
            _array = new T[n]
            _array_len[n];
        }
        Array<T>(const Array<T>& copy)
        {
            _array = new Array<T>[copy._array_len];
            *this = copy;
        }
        Array<T>& operator=(const Array<T>& copy)
        {
            delete(_array);
            _array_len = copy._array_len;
            _array = new T[_array_len];
            for (size_t i = 0; i < _array_len; i++)
                _array[i] = copy._array[i]
        }
        Array<T>& operator[](size_t n)
        {
            if (n >= _array_len || n < 0)
                throw std::invalid_argument("Index outside of array");
            return(array[n]);
        }
        ~Array<T>() { delete(array);}
        size_t size(void){ return(_array_len)}
};