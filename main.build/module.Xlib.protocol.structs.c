/* Generated code for Python module 'Xlib.protocol.structs'
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

/* The "module_Xlib$protocol$structs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Xlib$protocol$structs;
PyDictObject *moduledict_Xlib$protocol$structs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[156];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[156];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Xlib.protocol.structs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 156; i++) {
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
void checkModuleConstants_Xlib$protocol$structs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 156; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e8b0e145d4ed771203aab7a6993c3c02;
static PyCodeObject *codeobj_78dc0ca2f3af67bd0e650947bc548cd4;
static PyCodeObject *codeobj_e0d1e155205aee74c2816ef66c5bb285;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[95]; CHECK_OBJECT(module_filename_obj);
    codeobj_e8b0e145d4ed771203aab7a6993c3c02 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[154], NULL, NULL, 0, 0, 0);
    codeobj_78dc0ca2f3af67bd0e650947bc548cd4 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[155], NULL, 1, 0, 0);
    codeobj_e0d1e155205aee74c2816ef66c5bb285 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[155], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Xlib$protocol$structs$$$function__1_WindowValues();


static PyObject *MAKE_FUNCTION_Xlib$protocol$structs$$$function__2_GCValues();


// The module function definitions.
static PyObject *impl_Xlib$protocol$structs$$$function__1_WindowValues(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arg = python_pars[0];
    struct Nuitka_FrameObject *frame_e0d1e155205aee74c2816ef66c5bb285;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0d1e155205aee74c2816ef66c5bb285 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0d1e155205aee74c2816ef66c5bb285)) {
        Py_XDECREF(cache_frame_e0d1e155205aee74c2816ef66c5bb285);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0d1e155205aee74c2816ef66c5bb285 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0d1e155205aee74c2816ef66c5bb285 = MAKE_FUNCTION_FRAME(codeobj_e0d1e155205aee74c2816ef66c5bb285, module_Xlib$protocol$structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e0d1e155205aee74c2816ef66c5bb285->m_type_description == NULL);
    frame_e0d1e155205aee74c2816ef66c5bb285 = cache_frame_e0d1e155205aee74c2816ef66c5bb285;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e0d1e155205aee74c2816ef66c5bb285);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e0d1e155205aee74c2816ef66c5bb285) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_instance_14;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arg);
        tmp_args_element_value_1 = par_arg;
        tmp_args_element_value_2 = mod_consts[2];
        tmp_args_element_value_3 = mod_consts[3];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 30;
        tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 31;
        tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 32;
        tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 33;
        tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 34;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 35;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[14];
        tmp_args_element_value_12 = mod_consts[15];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = PyTuple_New(3);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_13, 1, tmp_tuple_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[19]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_13, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 38;
        tmp_args_element_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 39;
        tmp_args_element_value_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 40;
        tmp_args_element_value_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 41;
        tmp_args_element_value_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 42;
        tmp_args_element_value_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 43;
        tmp_args_element_value_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 44;
        tmp_args_element_value_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 45;
        tmp_args_element_value_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e0d1e155205aee74c2816ef66c5bb285->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS18(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0d1e155205aee74c2816ef66c5bb285);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0d1e155205aee74c2816ef66c5bb285);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0d1e155205aee74c2816ef66c5bb285);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0d1e155205aee74c2816ef66c5bb285, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0d1e155205aee74c2816ef66c5bb285->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0d1e155205aee74c2816ef66c5bb285, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0d1e155205aee74c2816ef66c5bb285,
        type_description_1,
        par_arg
    );


    // Release cached frame if used for exception.
    if (frame_e0d1e155205aee74c2816ef66c5bb285 == cache_frame_e0d1e155205aee74c2816ef66c5bb285) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e0d1e155205aee74c2816ef66c5bb285);
        cache_frame_e0d1e155205aee74c2816ef66c5bb285 = NULL;
    }

    assertFrameObject(frame_e0d1e155205aee74c2816ef66c5bb285);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$protocol$structs$$$function__2_GCValues(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arg = python_pars[0];
    struct Nuitka_FrameObject *frame_78dc0ca2f3af67bd0e650947bc548cd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_78dc0ca2f3af67bd0e650947bc548cd4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_78dc0ca2f3af67bd0e650947bc548cd4)) {
        Py_XDECREF(cache_frame_78dc0ca2f3af67bd0e650947bc548cd4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78dc0ca2f3af67bd0e650947bc548cd4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78dc0ca2f3af67bd0e650947bc548cd4 = MAKE_FUNCTION_FRAME(codeobj_78dc0ca2f3af67bd0e650947bc548cd4, module_Xlib$protocol$structs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_78dc0ca2f3af67bd0e650947bc548cd4->m_type_description == NULL);
    frame_78dc0ca2f3af67bd0e650947bc548cd4 = cache_frame_78dc0ca2f3af67bd0e650947bc548cd4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_78dc0ca2f3af67bd0e650947bc548cd4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_78dc0ca2f3af67bd0e650947bc548cd4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_44;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arg);
        tmp_args_element_value_1 = par_arg;
        tmp_args_element_value_2 = mod_consts[2];
        tmp_args_element_value_3 = mod_consts[3];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[31];
        tmp_args_element_value_6 = mod_consts[15];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = PyTuple_New(16);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyTuple_SET_ITEM(tmp_args_element_value_7, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[33]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 1, tmp_tuple_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[34]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 2, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[35]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 3, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[36]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 4, tmp_tuple_element_1);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[37]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 5, tmp_tuple_element_1);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[38]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 6, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[39]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 7, tmp_tuple_element_1);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[40]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 8, tmp_tuple_element_1);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[41]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 9, tmp_tuple_element_1);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[42]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 10, tmp_tuple_element_1);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[43]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 11, tmp_tuple_element_1);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[44]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 12, tmp_tuple_element_1);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[45]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 13, tmp_tuple_element_1);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[46]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 14, tmp_tuple_element_1);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[47]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 15, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 56;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[48], 0)
        );

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 57;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 58;
        tmp_args_element_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[50], 0)
        );

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 59;
        tmp_args_element_value_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[52], 0)
        );

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[13]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[53];
        tmp_args_element_value_14 = mod_consts[15];
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[54]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = PyTuple_New(3);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyTuple_SET_ITEM(tmp_args_element_value_15, 0, tmp_tuple_element_2);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[55]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_15, 1, tmp_tuple_element_2);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[56]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_15, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[13]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[57];
        tmp_args_element_value_18 = mod_consts[15];
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[58]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = PyTuple_New(4);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyTuple_SET_ITEM(tmp_args_element_value_19, 0, tmp_tuple_element_3);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[59]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_19, 1, tmp_tuple_element_3);
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[60]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_19, 2, tmp_tuple_element_3);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[61]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_19, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[13]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[62];
        tmp_args_element_value_22 = mod_consts[15];
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[63]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = PyTuple_New(3);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyTuple_SET_ITEM(tmp_args_element_value_23, 0, tmp_tuple_element_4);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "o";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[64]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "o";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_23, 1, tmp_tuple_element_4);
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "o";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[65]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "o";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_23, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_23);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_args_element_value_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[13]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[66];
        tmp_args_element_value_26 = mod_consts[15];
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[67]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = PyTuple_New(4);
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            PyTuple_SET_ITEM(tmp_args_element_value_27, 0, tmp_tuple_element_5);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "o";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[68]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "o";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_27, 1, tmp_tuple_element_5);
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "o";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[69]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "o";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_27, 2, tmp_tuple_element_5);
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "o";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[70]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "o";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_27, 3, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_27);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_args_element_value_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[13]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = mod_consts[71];
        tmp_args_element_value_30 = mod_consts[15];
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[72]);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_39;
            PyTuple_SET_ITEM(tmp_args_element_value_31, 0, tmp_tuple_element_6);
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "o";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[73]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "o";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_31, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_31);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_args_element_value_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 72;
        tmp_args_element_value_32 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 73;
        tmp_args_element_value_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 74;
        tmp_args_element_value_34 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[77], 0)
        );

        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 75;
        tmp_args_element_value_35 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 76;
        tmp_args_element_value_36 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[13]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = mod_consts[81];
        tmp_args_element_value_39 = mod_consts[15];
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[82]);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_42;
            PyTuple_SET_ITEM(tmp_args_element_value_40, 0, tmp_tuple_element_7);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "o";
                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[83]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "o";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_40, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_40);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_args_element_value_37 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 79;
        tmp_args_element_value_41 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 80;
        tmp_args_element_value_42 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 81;
        tmp_args_element_value_43 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[86], 0)
        );

        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 82;
        tmp_args_element_value_44 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 83;
        tmp_args_element_value_45 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);

            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 84;
        tmp_args_element_value_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[89],
            PyTuple_GET_ITEM(mod_consts[90], 0)
        );

        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);

            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[13]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = mod_consts[91];
        tmp_args_element_value_49 = mod_consts[15];
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[92]);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_45;
            PyTuple_SET_ITEM(tmp_args_element_value_50, 0, tmp_tuple_element_8);
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[93]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_50, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_50);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_args_element_value_47 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_16, tmp_args_element_value_20, tmp_args_element_value_24, tmp_args_element_value_28, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS26(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78dc0ca2f3af67bd0e650947bc548cd4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_78dc0ca2f3af67bd0e650947bc548cd4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78dc0ca2f3af67bd0e650947bc548cd4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78dc0ca2f3af67bd0e650947bc548cd4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78dc0ca2f3af67bd0e650947bc548cd4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78dc0ca2f3af67bd0e650947bc548cd4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78dc0ca2f3af67bd0e650947bc548cd4,
        type_description_1,
        par_arg
    );


    // Release cached frame if used for exception.
    if (frame_78dc0ca2f3af67bd0e650947bc548cd4 == cache_frame_78dc0ca2f3af67bd0e650947bc548cd4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_78dc0ca2f3af67bd0e650947bc548cd4);
        cache_frame_78dc0ca2f3af67bd0e650947bc548cd4 = NULL;
    }

    assertFrameObject(frame_78dc0ca2f3af67bd0e650947bc548cd4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Xlib$protocol$structs$$$function__1_WindowValues() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$protocol$structs$$$function__1_WindowValues,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e0d1e155205aee74c2816ef66c5bb285,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$protocol$structs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$protocol$structs$$$function__2_GCValues() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$protocol$structs$$$function__2_GCValues,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_78dc0ca2f3af67bd0e650947bc548cd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$protocol$structs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


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

function_impl_code functable_Xlib$protocol$structs[] = {
    impl_Xlib$protocol$structs$$$function__1_WindowValues,
    impl_Xlib$protocol$structs$$$function__2_GCValues,
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

    function_impl_code *current = functable_Xlib$protocol$structs;
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

    if (offset > sizeof(functable_Xlib$protocol$structs) || offset < 0) {
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
        functable_Xlib$protocol$structs[offset],
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
        module_Xlib$protocol$structs,
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
PyObject *modulecode_Xlib$protocol$structs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Xlib.protocol.structs");

    // Store the module for future use.
    module_Xlib$protocol$structs = module;

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
        PRINT_STRING("Xlib.protocol.structs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.protocol.structs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.protocol.structs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initXlib$protocol$structs\n");

    moduledict_Xlib$protocol$structs = MODULE_DICT(module_Xlib$protocol$structs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Xlib$protocol$structs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Xlib$protocol$structs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[101]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Xlib$protocol$structs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$protocol$structs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$protocol$structs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Xlib$protocol$structs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Xlib$protocol$structs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e8b0e145d4ed771203aab7a6993c3c02;
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
        UPDATE_STRING_DICT0(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e8b0e145d4ed771203aab7a6993c3c02 = MAKE_MODULE_FRAME(codeobj_e8b0e145d4ed771203aab7a6993c3c02, module_Xlib$protocol$structs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e8b0e145d4ed771203aab7a6993c3c02);
    assert(Py_REFCNT(frame_e8b0e145d4ed771203aab7a6993c3c02) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[95];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[98], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[99], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[101];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Xlib$protocol$structs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[102];
        tmp_level_value_1 = mod_consts[103];
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 23;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_Xlib$protocol$structs,
                mod_consts[16],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[101];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_Xlib$protocol$structs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[104];
        tmp_level_value_2 = mod_consts[15];
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 26;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_Xlib$protocol$structs,
                mod_consts[0],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_Xlib$protocol$structs$$$function__1_WindowValues();

        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_Xlib$protocol$structs$$$function__2_GCValues();

        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[107]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 91;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[108], 0)
        );

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 92;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 93;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[107]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[112];
        tmp_args_element_value_6 = mod_consts[15];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[113]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = PyTuple_New(3);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyTuple_SET_ITEM(tmp_args_element_value_7, 0, tmp_tuple_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[114]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 1, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[115]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 98;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[116],
            PyTuple_GET_ITEM(mod_consts[117], 0)
        );

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 99;
        tmp_args_element_value_9 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_5,
            mod_consts[118],
            &PyTuple_GET_ITEM(mod_consts[119], 0)
        );

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[120]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[121];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[122]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_instance_11;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[107]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 104;
        tmp_args_element_value_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[124], 0)
        );

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 105;
        tmp_args_element_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[125], 0)
        );

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 106;
        tmp_args_element_value_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[126], 0)
        );

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 107;
        tmp_args_element_value_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[127], 0)
        );

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 108;
        tmp_args_element_value_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[128], 0)
        );

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 109;
        tmp_args_element_value_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[129], 0)
        );

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_instance_13;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[107]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 113;
        tmp_args_element_value_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[131], 0)
        );

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 114;
        tmp_args_element_value_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[132], 0)
        );

        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_instance_19;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[107]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 118;
        tmp_args_element_value_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[134], 0)
        );

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 119;
        tmp_args_element_value_22 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[135], 0)
        );

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 120;
        tmp_args_element_value_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[136], 0)
        );

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 121;
        tmp_args_element_value_24 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_17,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[137], 0)
        );

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 122;
        tmp_args_element_value_25 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[89],
            PyTuple_GET_ITEM(mod_consts[138], 0)
        );

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 123;
        tmp_args_element_value_26 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_19,
            mod_consts[116],
            PyTuple_GET_ITEM(mod_consts[117], 0)
        );

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_instance_23;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[107]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 128;
        tmp_args_element_value_27 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_20,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[135], 0)
        );

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 129;
        tmp_args_element_value_28 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_21,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[136], 0)
        );

        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 130;
        tmp_args_element_value_29 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_22,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[137], 0)
        );

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 131;
        tmp_args_element_value_30 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_23,
            mod_consts[116],
            PyTuple_GET_ITEM(mod_consts[140], 0)
        );

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_instance_25;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[107]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 136;
        tmp_args_element_value_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_24,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 137;
        tmp_args_element_value_32 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_25,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_instance_29;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[107]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 141;
        tmp_args_element_value_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_26,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[143], 0)
        );

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_27 == NULL)) {
            tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 142;
        tmp_args_element_value_34 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_27,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[144], 0)
        );

        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 143;
        tmp_args_element_value_35 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_28,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[145], 0)
        );

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_29 == NULL)) {
            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 144;
        tmp_args_element_value_36 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_29,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[146], 0)
        );

        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_instance_33;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[107]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_30 == NULL)) {
            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 148;
        tmp_args_element_value_37 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_30,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 149;
        tmp_args_element_value_38 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_31,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 150;
        tmp_args_element_value_39 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_32,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[148], 0)
        );

        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 151;
        tmp_args_element_value_40 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_33,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[149], 0)
        );

        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_instance_35;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_instance_39;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[107]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 155;
        tmp_args_element_value_41 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_34,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 156;
        tmp_args_element_value_42 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_35,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 157;
        tmp_args_element_value_43 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_36,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[148], 0)
        );

        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 158;
        tmp_args_element_value_44 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_37,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[149], 0)
        );

        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_38 == NULL)) {
            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 159;
        tmp_args_element_value_45 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_38,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[151], 0)
        );

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 160;
        tmp_args_element_value_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_39,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[152], 0)
        );

        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_17);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e8b0e145d4ed771203aab7a6993c3c02);
#endif
    popFrameStack();

    assertFrameObject(frame_e8b0e145d4ed771203aab7a6993c3c02);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e8b0e145d4ed771203aab7a6993c3c02);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e8b0e145d4ed771203aab7a6993c3c02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8b0e145d4ed771203aab7a6993c3c02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8b0e145d4ed771203aab7a6993c3c02, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Xlib.protocol.structs", false);

    Py_INCREF(module_Xlib$protocol$structs);
    return module_Xlib$protocol$structs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Xlib$protocol$structs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
