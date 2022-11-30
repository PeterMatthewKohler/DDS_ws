// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file String.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "String.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

std_msgs::msg::dds_::String_::String_()
{
    // m_data com.eprosima.idl.parser.typecode.StringTypeCode@1a1d6a08
    m_data ="";

}

std_msgs::msg::dds_::String_::~String_()
{
}

std_msgs::msg::dds_::String_::String_(
        const String_& x)
{
    m_data = x.m_data;
}

std_msgs::msg::dds_::String_::String_(
        String_&& x)
{
    m_data = std::move(x.m_data);
}

std_msgs::msg::dds_::String_& std_msgs::msg::dds_::String_::operator =(
        const String_& x)
{

    m_data = x.m_data;

    return *this;
}

std_msgs::msg::dds_::String_& std_msgs::msg::dds_::String_::operator =(
        String_&& x)
{

    m_data = std::move(x.m_data);

    return *this;
}

bool std_msgs::msg::dds_::String_::operator ==(
        const String_& x) const
{

    return (m_data == x.m_data);
}

bool std_msgs::msg::dds_::String_::operator !=(
        const String_& x) const
{
    return !(*this == x);
}

size_t std_msgs::msg::dds_::String_::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    return current_alignment - initial_alignment;
}

size_t std_msgs::msg::dds_::String_::getCdrSerializedSize(
        const std_msgs::msg::dds_::String_& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.data().size() + 1;

    return current_alignment - initial_alignment;
}

void std_msgs::msg::dds_::String_::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data.c_str();

}

void std_msgs::msg::dds_::String_::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data;}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void std_msgs::msg::dds_::String_::data(
        const std::string& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void std_msgs::msg::dds_::String_::data(
        std::string&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::string& std_msgs::msg::dds_::String_::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::string& std_msgs::msg::dds_::String_::data()
{
    return m_data;
}

size_t std_msgs::msg::dds_::String_::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool std_msgs::msg::dds_::String_::isKeyDefined()
{
    return false;
}

void std_msgs::msg::dds_::String_::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}



