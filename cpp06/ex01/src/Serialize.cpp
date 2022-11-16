/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:16:19 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/13 17:28:35 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

void	*serialize_void(Data *ptr) {
	return reinterpret_cast<void *>(ptr);
}

Data	*deserialize_void(void *raw) {
	return reinterpret_cast<Data *>(raw);
}