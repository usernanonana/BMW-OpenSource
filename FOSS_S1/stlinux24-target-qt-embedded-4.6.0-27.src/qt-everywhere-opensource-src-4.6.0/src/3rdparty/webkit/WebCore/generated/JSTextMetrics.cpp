/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTextMetrics.h"

#include "TextMetrics.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTextMetrics);

/* Hash table */

static const HashTableValue JSTextMetricsTableValues[3] =
{
    { "width", DontDelete|ReadOnly, (intptr_t)jsTextMetricsWidth, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsTextMetricsConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSTextMetricsTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSTextMetricsTableValues, 0 };
#else
    { 4, 3, JSTextMetricsTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSTextMetricsConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSTextMetricsConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSTextMetricsConstructorTableValues, 0 };
#else
    { 1, 0, JSTextMetricsConstructorTableValues, 0 };
#endif

class JSTextMetricsConstructor : public DOMConstructorObject {
public:
    JSTextMetricsConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSTextMetricsConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSTextMetricsPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSTextMetricsConstructor::s_info = { "TextMetricsConstructor", 0, &JSTextMetricsConstructorTable, 0 };

bool JSTextMetricsConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTextMetricsConstructor, DOMObject>(exec, &JSTextMetricsConstructorTable, this, propertyName, slot);
}

bool JSTextMetricsConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTextMetricsConstructor, DOMObject>(exec, &JSTextMetricsConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSTextMetricsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSTextMetricsPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSTextMetricsPrototypeTableValues, 0 };
#else
    { 1, 0, JSTextMetricsPrototypeTableValues, 0 };
#endif

const ClassInfo JSTextMetricsPrototype::s_info = { "TextMetricsPrototype", 0, &JSTextMetricsPrototypeTable, 0 };

JSObject* JSTextMetricsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTextMetrics>(exec, globalObject);
}

const ClassInfo JSTextMetrics::s_info = { "TextMetrics", 0, &JSTextMetricsTable, 0 };

JSTextMetrics::JSTextMetrics(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<TextMetrics> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSTextMetrics::~JSTextMetrics()
{
    forgetDOMObject(this, impl());
}

JSObject* JSTextMetrics::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSTextMetricsPrototype(JSTextMetricsPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSTextMetrics::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTextMetrics, Base>(exec, &JSTextMetricsTable, this, propertyName, slot);
}

bool JSTextMetrics::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTextMetrics, Base>(exec, &JSTextMetricsTable, this, propertyName, descriptor);
}

JSValue jsTextMetricsWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTextMetrics* castedThis = static_cast<JSTextMetrics*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    TextMetrics* imp = static_cast<TextMetrics*>(castedThis->impl());
    return jsNumber(exec, imp->width());
}

JSValue jsTextMetricsConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTextMetrics* domObject = static_cast<JSTextMetrics*>(asObject(slot.slotBase()));
    return JSTextMetrics::getConstructor(exec, domObject->globalObject());
}
JSValue JSTextMetrics::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTextMetricsConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TextMetrics* object)
{
    return getDOMObjectWrapper<JSTextMetrics>(exec, globalObject, object);
}
TextMetrics* toTextMetrics(JSC::JSValue value)
{
    return value.inherits(&JSTextMetrics::s_info) ? static_cast<JSTextMetrics*>(asObject(value))->impl() : 0;
}

}