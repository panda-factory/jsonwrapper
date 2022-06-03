//
// Created by guozhenxiong on 2022-06-02.
//

#ifndef JSONWRAPPER_JSON_VALUE_H
#define JSONWRAPPER_JSON_VALUE_H

#include "value.h"
#include "json_object.h"

namespace wtf {
class JsonValue : public Value {
public:
    virtual ~JsonValue() = default;

    virtual bool IsArray() const = 0;

    virtual bool IsObject() const = 0;

    virtual bool IsNull() const = 0;

    virtual bool Contains(const std::string& key) const = 0;

    virtual std::unique_ptr<JsonValue> GetValue(const std::string& key) const = 0;

    virtual std::unique_ptr<JsonObject> GetObject() const = 0;

    //virtual JsonValue& operator [](const std::string key) const = 0;
};
} // namespace wtf
#endif //JSONWRAPPER_JSON_VALUE_H