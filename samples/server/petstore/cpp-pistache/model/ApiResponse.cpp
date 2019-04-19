/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ApiResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ApiResponse::ApiResponse()
{
    m_Code = 0;
    m_CodeIsSet = false;
    m_Type = "";
    m_TypeIsSet = false;
    m_Message = "";
    m_MessageIsSet = false;
    
}

ApiResponse::~ApiResponse()
{
}

void ApiResponse::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ApiResponse& o)
{
    j = nlohmann::json();
    if(o.codeIsSet())
        j["code"] = o.m_Code;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.messageIsSet())
        j["message"] = o.m_Message;
}

void from_json(const nlohmann::json& j, ApiResponse& o)
{
    if(!j.at("code").is_null())
    {
        j.at("code").get_to(o.m_Code);
        o.m_CodeIsSet = true;
    } 
    if(!j.at("type").is_null())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(!j.at("message").is_null())
    {
        j.at("message").get_to(o.m_Message);
        o.m_MessageIsSet = true;
    } 
}

int32_t ApiResponse::getCode() const
{
    return m_Code;
}
void ApiResponse::setCode(int32_t const value)
{
    m_Code = value;
    m_CodeIsSet = true;
}
bool ApiResponse::codeIsSet() const
{
    return m_CodeIsSet;
}
void ApiResponse::unsetCode()
{
    m_CodeIsSet = false;
}
std::string ApiResponse::getType() const
{
    return m_Type;
}
void ApiResponse::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool ApiResponse::typeIsSet() const
{
    return m_TypeIsSet;
}
void ApiResponse::unsetType()
{
    m_TypeIsSet = false;
}
std::string ApiResponse::getMessage() const
{
    return m_Message;
}
void ApiResponse::setMessage(std::string const& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool ApiResponse::messageIsSet() const
{
    return m_MessageIsSet;
}
void ApiResponse::unsetMessage()
{
    m_MessageIsSet = false;
}

}
}
}
}

