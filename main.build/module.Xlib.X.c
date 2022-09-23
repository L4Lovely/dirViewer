/* Generated code for Python module 'Xlib.X'
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

/* The "module_Xlib$X" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Xlib$X;
PyDictObject *moduledict_Xlib$X;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[408];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[408];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Xlib.X"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 408; i++) {
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
void checkModuleConstants_Xlib$X(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 408; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c7414358d3707e432f66dbad4dfa968a;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_c7414358d3707e432f66dbad4dfa968a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[406], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_Xlib$X[] = {

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

    function_impl_code *current = functable_Xlib$X;
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

    if (offset > sizeof(functable_Xlib$X) || offset < 0) {
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
        functable_Xlib$X[offset],
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
        module_Xlib$X,
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
PyObject *modulecode_Xlib$X(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Xlib.X");

    // Store the module for future use.
    module_Xlib$X = module;

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
        PRINT_STRING("Xlib.X: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.X: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.X: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initXlib$X\n");

    moduledict_Xlib$X = MODULE_DICT(module_Xlib$X);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Xlib$X,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Xlib$X,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[407]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Xlib$X,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$X,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$X,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Xlib$X);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Xlib$X);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_c7414358d3707e432f66dbad4dfa968a;
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
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c7414358d3707e432f66dbad4dfa968a = MAKE_MODULE_FRAME(codeobj_c7414358d3707e432f66dbad4dfa968a, module_Xlib$X);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c7414358d3707e432f66dbad4dfa968a);
    assert(Py_REFCNT(frame_c7414358d3707e432f66dbad4dfa968a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[1];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[3]);

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
    RESTORE_FRAME_EXCEPTION(frame_c7414358d3707e432f66dbad4dfa968a);
#endif
    popFrameStack();

    assertFrameObject(frame_c7414358d3707e432f66dbad4dfa968a);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7414358d3707e432f66dbad4dfa968a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7414358d3707e432f66dbad4dfa968a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7414358d3707e432f66dbad4dfa968a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7414358d3707e432f66dbad4dfa968a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = GET_STRING_DICT_VALUE(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assign_source_144 == NULL)) {
            tmp_assign_source_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_assign_source_144 == NULL));
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        tmp_assign_source_271 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        tmp_assign_source_272 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        tmp_assign_source_274 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        tmp_assign_source_275 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        tmp_assign_source_276 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        tmp_assign_source_277 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        tmp_assign_source_278 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        tmp_assign_source_279 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        tmp_assign_source_281 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        tmp_assign_source_282 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        tmp_assign_source_284 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        tmp_assign_source_285 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        tmp_assign_source_287 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        tmp_assign_source_288 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        tmp_assign_source_289 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        tmp_assign_source_324 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        tmp_assign_source_325 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        tmp_assign_source_326 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        tmp_assign_source_327 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        tmp_assign_source_328 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        tmp_assign_source_329 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        tmp_assign_source_330 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        tmp_assign_source_331 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        tmp_assign_source_332 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        tmp_assign_source_333 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        tmp_assign_source_334 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        tmp_assign_source_335 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        tmp_assign_source_336 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        tmp_assign_source_337 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        tmp_assign_source_338 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        tmp_assign_source_339 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        tmp_assign_source_340 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        tmp_assign_source_341 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        tmp_assign_source_342 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        tmp_assign_source_343 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        tmp_assign_source_344 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;
        tmp_assign_source_345 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        tmp_assign_source_346 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$X, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_346);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Xlib.X", false);

    Py_INCREF(module_Xlib$X);
    return module_Xlib$X;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Xlib$X", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
