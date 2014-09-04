/**
 * port.cpp - 
 * @author: Jonathan Beard
 * @version: Thu Aug 28 09:55:47 2014
 * 
 * Copyright 2014 Jonathan Beard
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <algorithm>

#include "port.hpp"
#include "portexception.hpp"

bool
Port::addPort( const std::string port_name )
{
   const auto ret_val( portmap.insert( std::make_pair( port_name, std::nullptr ) ) );
   /** return true if inserted or false if already exists **/
   return( ret_val.second );
}

std::size_t
Port::getPortType( const std::string port_name )
{

}

FIFO&
Port:operator[]( const std::string port_name )
{
   
   return( *portmap[ port_name ] );
}
