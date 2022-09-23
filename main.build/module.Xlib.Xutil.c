/* Generated code for Python module 'Xlib.Xutil'
 * created by Nuitka version 1.0.7
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_Xlib$Xutil" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Xlib$Xutil;
PyDictObject *moduledict_Xlib$Xutil;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[80];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[80];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Xlib.Xutil"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 80; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Xlib$Xutil(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 80; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3dc6bf38fca492fb3847965e22d43cbe;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_3dc6bf38fca492fb3847965e22d43cbe = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[78], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_Xlib$Xutil[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_Xlib$Xutil;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_Xlib$Xutil) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_Xlib$Xutil[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_Xlib$Xutil,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_Xlib$Xutil(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Xlib.Xutil");

    // Store the module for future use.
    module_Xlib$Xutil = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.Xutil: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.Xutil: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.Xutil: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initXlib$Xutil\n");

    moduledict_Xlib$Xutil = MODULE_DICT(module_Xlib$Xutil);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Xlib$Xutil,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Xlib$Xutil,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[79]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Xlib$Xutil,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$Xutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$Xutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Xlib$Xutil);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Xlib$Xutil);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_3dc6bf38fca492fb3847965e22d43cbe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_3dc6bf38fca492fb3847965e22d43cbe = MAKE_MODULE_FRAME(codeobj_3dc6bf38fca492fb3847965e22d43cbe, module_Xlib$Xutil);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_3dc6bf38fca492fb3847965e22d43cbe);
    assert(Py_REFCNT(frame_3dc6bf38fca492fb3847965e22d43cbe) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[1];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3dc6bf38fca492fb3847965e22d43cbe);
#endif
    popFrameStack();

    assertFrameObject(frame_3dc6bf38fca492fb3847965e22d43cbe);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3dc6bf38fca492fb3847965e22d43cbe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3dc6bf38fca492fb3847965e22d43cbe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3dc6bf38fca492fb3847965e22d43cbe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3dc6bf38fca492fb3847965e22d43cbe, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        tmp_bitor_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_bitor_expr_left_5 == NULL)) {
            tmp_bitor_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_bitor_expr_left_5 == NULL));
        tmp_bitor_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_bitor_expr_right_5 == NULL)) {
            tmp_bitor_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_bitor_expr_right_5 == NULL));
        tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        assert(!(tmp_bitor_expr_left_4 == NULL));
        tmp_bitor_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_bitor_expr_right_4 == NULL)) {
            tmp_bitor_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        assert(!(tmp_bitor_expr_right_4 == NULL));
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        assert(!(tmp_bitor_expr_left_3 == NULL));
        tmp_bitor_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_bitor_expr_right_3 == NULL)) {
            tmp_bitor_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_bitor_expr_right_3 == NULL));
        tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        assert(!(tmp_bitor_expr_left_2 == NULL));
        tmp_bitor_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_bitor_expr_right_2 == NULL)) {
            tmp_bitor_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_bitor_expr_right_2 == NULL));
        tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        assert(!(tmp_bitor_expr_left_1 == NULL));
        tmp_bitor_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            tmp_bitor_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_bitor_expr_right_1 == NULL));
        tmp_assign_source_22 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        assert(!(tmp_assign_source_22 == NULL));
        UPDATE_STRING_DICT1(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_bitor_expr_left_6;
        PyObject *tmp_bitor_expr_right_6;
        PyObject *tmp_bitor_expr_left_7;
        PyObject *tmp_bitor_expr_right_7;
        PyObject *tmp_bitor_expr_left_8;
        PyObject *tmp_bitor_expr_right_8;
        PyObject *tmp_bitor_expr_left_9;
        PyObject *tmp_bitor_expr_right_9;
        PyObject *tmp_bitor_expr_left_10;
        PyObject *tmp_bitor_expr_right_10;
        PyObject *tmp_bitor_expr_left_11;
        PyObject *tmp_bitor_expr_right_11;
        PyObject *tmp_bitor_expr_left_12;
        PyObject *tmp_bitor_expr_right_12;
        PyObject *tmp_bitor_expr_left_13;
        PyObject *tmp_bitor_expr_right_13;
        tmp_bitor_expr_left_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_bitor_expr_left_13 == NULL)) {
            tmp_bitor_expr_left_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_bitor_expr_left_13 == NULL));
        tmp_bitor_expr_right_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_bitor_expr_right_13 == NULL)) {
            tmp_bitor_expr_right_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_bitor_expr_right_13 == NULL));
        tmp_bitor_expr_left_12 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_13, tmp_bitor_expr_right_13);
        assert(!(tmp_bitor_expr_left_12 == NULL));
        tmp_bitor_expr_right_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_bitor_expr_right_12 == NULL)) {
            tmp_bitor_expr_right_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_bitor_expr_right_12 == NULL));
        tmp_bitor_expr_left_11 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_12, tmp_bitor_expr_right_12);
        Py_DECREF(tmp_bitor_expr_left_12);
        assert(!(tmp_bitor_expr_left_11 == NULL));
        tmp_bitor_expr_right_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_bitor_expr_right_11 == NULL)) {
            tmp_bitor_expr_right_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_bitor_expr_right_11 == NULL));
        tmp_bitor_expr_left_10 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_11, tmp_bitor_expr_right_11);
        Py_DECREF(tmp_bitor_expr_left_11);
        assert(!(tmp_bitor_expr_left_10 == NULL));
        tmp_bitor_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_bitor_expr_right_10 == NULL)) {
            tmp_bitor_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_bitor_expr_right_10 == NULL));
        tmp_bitor_expr_left_9 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_10, tmp_bitor_expr_right_10);
        Py_DECREF(tmp_bitor_expr_left_10);
        assert(!(tmp_bitor_expr_left_9 == NULL));
        tmp_bitor_expr_right_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_bitor_expr_right_9 == NULL)) {
            tmp_bitor_expr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_bitor_expr_right_9 == NULL));
        tmp_bitor_expr_left_8 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_9, tmp_bitor_expr_right_9);
        Py_DECREF(tmp_bitor_expr_left_9);
        assert(!(tmp_bitor_expr_left_8 == NULL));
        tmp_bitor_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_bitor_expr_right_8 == NULL)) {
            tmp_bitor_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_bitor_expr_right_8 == NULL));
        tmp_bitor_expr_left_7 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_8, tmp_bitor_expr_right_8);
        Py_DECREF(tmp_bitor_expr_left_8);
        assert(!(tmp_bitor_expr_left_7 == NULL));
        tmp_bitor_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_bitor_expr_right_7 == NULL)) {
            tmp_bitor_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_bitor_expr_right_7 == NULL));
        tmp_bitor_expr_left_6 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_7, tmp_bitor_expr_right_7);
        Py_DECREF(tmp_bitor_expr_left_7);
        assert(!(tmp_bitor_expr_left_6 == NULL));
        tmp_bitor_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_bitor_expr_right_6 == NULL)) {
            tmp_bitor_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_bitor_expr_right_6 == NULL));
        tmp_assign_source_32 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
        Py_DECREF(tmp_bitor_expr_left_6);
        assert(!(tmp_assign_source_32 == NULL));
        UPDATE_STRING_DICT1(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$Xutil, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_60);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Xlib.Xutil", false);

    Py_INCREF(module_Xlib$Xutil);
    return module_Xlib$Xutil;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Xlib$Xutil", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
