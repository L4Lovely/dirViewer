/* Generated code for Python module 'Xlib.ext.shape'
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

/* The "module_Xlib$ext$shape" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Xlib$ext$shape;
PyDictObject *moduledict_Xlib$ext$shape;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[174];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[174];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Xlib.ext.shape"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 174; i++) {
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
void checkModuleConstants_Xlib$ext$shape(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 174; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_efe4a631f85ec7ba8e746824491205f7;
static PyCodeObject *codeobj_0c71c70bd1417ca0295128c05af2363c;
static PyCodeObject *codeobj_31daf2f1ae1ce31897257370825a3446;
static PyCodeObject *codeobj_281bb888ea9f1c2f7a6d6d0256b09498;
static PyCodeObject *codeobj_554fe7a3155806abc64b44fd8bba6bfe;
static PyCodeObject *codeobj_d3f2f267398176b99ea442dee8df7de0;
static PyCodeObject *codeobj_b12ba2d14e0f93f979709de5172e7ea1;
static PyCodeObject *codeobj_520cde06b35387cfebe44d3779ba8086;
static PyCodeObject *codeobj_3b0529aadcd768b9f874fd71930b6f6e;
static PyCodeObject *codeobj_2ef8d45672f80ce4b139df698e94c778;
static PyCodeObject *codeobj_2a73fabed2f662c08960f4eb2d80a1fb;
static PyCodeObject *codeobj_ca3858fa1671d143f2aaf30763d2e44e;
static PyCodeObject *codeobj_8ee4fc0523026f34793344185b33b665;
static PyCodeObject *codeobj_eaab6454c2287689010d09e4f8ecc53c;
static PyCodeObject *codeobj_cb565ab40cecdd3d9113f9ed51d9b842;
static PyCodeObject *codeobj_2e65cb0d8016a26582ed51c1f1e79d84;
static PyCodeObject *codeobj_9419e9028140a90909f17cf1b016ec4f;
static PyCodeObject *codeobj_9c7ab610cc239950bcb05718fa89c42a;
static PyCodeObject *codeobj_5eb1de2f379b3236d9c4bcfdc86d439e;
static PyCodeObject *codeobj_91118c4a7f82375c887b4efb4b1de75d;
static PyCodeObject *codeobj_3de0957003e5b7e528558a96581c02e4;
static PyCodeObject *codeobj_0fcdf04b8c7c390af7c215bc76c5610f;
static PyCodeObject *codeobj_2378d75bf49fd9cdaa0aa66096c9bdd5;
static PyCodeObject *codeobj_60d31ab3c81067dab05b0626f410df47;
static PyCodeObject *codeobj_233cf859558995d6e00594e6d3a1945d;
static PyCodeObject *codeobj_44133ff6b87491686cc253592f035acd;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[55]; CHECK_OBJECT(module_filename_obj);
    codeobj_efe4a631f85ec7ba8e746824491205f7 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[162], NULL, NULL, 0, 0, 0);
    codeobj_0c71c70bd1417ca0295128c05af2363c = MAKE_CODEOBJECT(module_filename_obj, 95, CO_NOFREE, mod_consts[8], mod_consts[163], NULL, 0, 0, 0);
    codeobj_31daf2f1ae1ce31897257370825a3446 = MAKE_CODEOBJECT(module_filename_obj, 199, CO_NOFREE, mod_consts[50], mod_consts[163], NULL, 0, 0, 0);
    codeobj_281bb888ea9f1c2f7a6d6d0256b09498 = MAKE_CODEOBJECT(module_filename_obj, 178, CO_NOFREE, mod_consts[13], mod_consts[163], NULL, 0, 0, 0);
    codeobj_554fe7a3155806abc64b44fd8bba6bfe = MAKE_CODEOBJECT(module_filename_obj, 162, CO_NOFREE, mod_consts[15], mod_consts[163], NULL, 0, 0, 0);
    codeobj_d3f2f267398176b99ea442dee8df7de0 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[0], mod_consts[163], NULL, 0, 0, 0);
    codeobj_b12ba2d14e0f93f979709de5172e7ea1 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_NOFREE, mod_consts[17], mod_consts[163], NULL, 0, 0, 0);
    codeobj_520cde06b35387cfebe44d3779ba8086 = MAKE_CODEOBJECT(module_filename_obj, 31, CO_NOFREE, mod_consts[52], mod_consts[163], NULL, 0, 0, 0);
    codeobj_3b0529aadcd768b9f874fd71930b6f6e = MAKE_CODEOBJECT(module_filename_obj, 111, CO_NOFREE, mod_consts[19], mod_consts[163], NULL, 0, 0, 0);
    codeobj_2ef8d45672f80ce4b139df698e94c778 = MAKE_CODEOBJECT(module_filename_obj, 124, CO_NOFREE, mod_consts[21], mod_consts[163], NULL, 0, 0, 0);
    codeobj_2a73fabed2f662c08960f4eb2d80a1fb = MAKE_CODEOBJECT(module_filename_obj, 47, CO_NOFREE, mod_consts[22], mod_consts[163], NULL, 0, 0, 0);
    codeobj_ca3858fa1671d143f2aaf30763d2e44e = MAKE_CODEOBJECT(module_filename_obj, 64, CO_NOFREE, mod_consts[24], mod_consts[163], NULL, 0, 0, 0);
    codeobj_8ee4fc0523026f34793344185b33b665 = MAKE_CODEOBJECT(module_filename_obj, 18, CO_NOFREE, mod_consts[3], mod_consts[163], NULL, 0, 0, 0);
    codeobj_eaab6454c2287689010d09e4f8ecc53c = MAKE_CODEOBJECT(module_filename_obj, 11, CO_NOFREE, mod_consts[79], mod_consts[163], NULL, 0, 0, 0);
    codeobj_cb565ab40cecdd3d9113f9ed51d9b842 = MAKE_CODEOBJECT(module_filename_obj, 151, CO_NOFREE, mod_consts[26], mod_consts[163], NULL, 0, 0, 0);
    codeobj_2e65cb0d8016a26582ed51c1f1e79d84 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[164], NULL, 2, 0, 0);
    codeobj_9419e9028140a90909f17cf1b016ec4f = MAKE_CODEOBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[165], NULL, 6, 0, 0);
    codeobj_9c7ab610cc239950bcb05718fa89c42a = MAKE_CODEOBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[166], NULL, 2, 0, 0);
    codeobj_5eb1de2f379b3236d9c4bcfdc86d439e = MAKE_CODEOBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[167], NULL, 2, 0, 0);
    codeobj_91118c4a7f82375c887b4efb4b1de75d = MAKE_CODEOBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[168], NULL, 1, 0, 0);
    codeobj_3de0957003e5b7e528558a96581c02e4 = MAKE_CODEOBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[169], NULL, 6, 0, 0);
    codeobj_0fcdf04b8c7c390af7c215bc76c5610f = MAKE_CODEOBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[170], NULL, 4, 0, 0);
    codeobj_2378d75bf49fd9cdaa0aa66096c9bdd5 = MAKE_CODEOBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[168], NULL, 1, 0, 0);
    codeobj_60d31ab3c81067dab05b0626f410df47 = MAKE_CODEOBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[168], NULL, 1, 0, 0);
    codeobj_233cf859558995d6e00594e6d3a1945d = MAKE_CODEOBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[171], NULL, 7, 0, 0);
    codeobj_44133ff6b87491686cc253592f035acd = MAKE_CODEOBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[172], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__10_select_input();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__11_init();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__1___init__();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__2_combine();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__3_get_rectangles();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__4_input_selected();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__5_mask();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__6_offset();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__7_query_extents();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__8_query_version();


static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__9_rectangles();


// The module function definitions.
static PyObject *impl_Xlib$ext$shape$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_2e65cb0d8016a26582ed51c1f1e79d84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2e65cb0d8016a26582ed51c1f1e79d84 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2e65cb0d8016a26582ed51c1f1e79d84)) {
        Py_XDECREF(cache_frame_2e65cb0d8016a26582ed51c1f1e79d84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e65cb0d8016a26582ed51c1f1e79d84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e65cb0d8016a26582ed51c1f1e79d84 = MAKE_FUNCTION_FRAME(codeobj_2e65cb0d8016a26582ed51c1f1e79d84, module_Xlib$ext$shape, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2e65cb0d8016a26582ed51c1f1e79d84->m_type_description == NULL);
    frame_2e65cb0d8016a26582ed51c1f1e79d84 = cache_frame_2e65cb0d8016a26582ed51c1f1e79d84;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2e65cb0d8016a26582ed51c1f1e79d84);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2e65cb0d8016a26582ed51c1f1e79d84) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER2(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_0_1 = par_name;
        tmp_kw_call_arg_value_1_1 = mod_consts[2];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 27;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 27;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = PyTuple_New(3);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_0_1, 0, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_0_1, 1, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_0_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_2e65cb0d8016a26582ed51c1f1e79d84->m_frame.f_lineno = 26;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2e65cb0d8016a26582ed51c1f1e79d84);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2e65cb0d8016a26582ed51c1f1e79d84);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2e65cb0d8016a26582ed51c1f1e79d84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e65cb0d8016a26582ed51c1f1e79d84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e65cb0d8016a26582ed51c1f1e79d84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e65cb0d8016a26582ed51c1f1e79d84,
        type_description_1,
        par_self,
        par_name,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_2e65cb0d8016a26582ed51c1f1e79d84 == cache_frame_2e65cb0d8016a26582ed51c1f1e79d84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2e65cb0d8016a26582ed51c1f1e79d84);
        cache_frame_2e65cb0d8016a26582ed51c1f1e79d84 = NULL;
    }

    assertFrameObject(frame_2e65cb0d8016a26582ed51c1f1e79d84);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__2_combine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_operation = python_pars[1];
    PyObject *par_destination_kind = python_pars[2];
    PyObject *par_source_kind = python_pars[3];
    PyObject *par_x_offset = python_pars[4];
    PyObject *par_y_offset = python_pars[5];
    struct Nuitka_FrameObject *frame_9419e9028140a90909f17cf1b016ec4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9419e9028140a90909f17cf1b016ec4f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9419e9028140a90909f17cf1b016ec4f)) {
        Py_XDECREF(cache_frame_9419e9028140a90909f17cf1b016ec4f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9419e9028140a90909f17cf1b016ec4f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9419e9028140a90909f17cf1b016ec4f = MAKE_FUNCTION_FRAME(codeobj_9419e9028140a90909f17cf1b016ec4f, module_Xlib$ext$shape, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9419e9028140a90909f17cf1b016ec4f->m_type_description == NULL);
    frame_9419e9028140a90909f17cf1b016ec4f = cache_frame_9419e9028140a90909f17cf1b016ec4f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9419e9028140a90909f17cf1b016ec4f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9419e9028140a90909f17cf1b016ec4f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9419e9028140a90909f17cf1b016ec4f->m_frame.f_lineno = 206;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_2_1 = par_self;
        CHECK_OBJECT(par_operation);
        tmp_kw_call_value_3_1 = par_operation;
        CHECK_OBJECT(par_destination_kind);
        tmp_kw_call_value_4_1 = par_destination_kind;
        CHECK_OBJECT(par_source_kind);
        tmp_kw_call_value_5_1 = par_source_kind;
        CHECK_OBJECT(par_x_offset);
        tmp_kw_call_value_6_1 = par_x_offset;
        CHECK_OBJECT(par_y_offset);
        tmp_kw_call_value_7_1 = par_y_offset;
        frame_9419e9028140a90909f17cf1b016ec4f->m_frame.f_lineno = 204;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9419e9028140a90909f17cf1b016ec4f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9419e9028140a90909f17cf1b016ec4f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9419e9028140a90909f17cf1b016ec4f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9419e9028140a90909f17cf1b016ec4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9419e9028140a90909f17cf1b016ec4f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9419e9028140a90909f17cf1b016ec4f,
        type_description_1,
        par_self,
        par_operation,
        par_destination_kind,
        par_source_kind,
        par_x_offset,
        par_y_offset
    );


    // Release cached frame if used for exception.
    if (frame_9419e9028140a90909f17cf1b016ec4f == cache_frame_9419e9028140a90909f17cf1b016ec4f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9419e9028140a90909f17cf1b016ec4f);
        cache_frame_9419e9028140a90909f17cf1b016ec4f = NULL;
    }

    assertFrameObject(frame_9419e9028140a90909f17cf1b016ec4f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_operation);
    Py_DECREF(par_operation);
    CHECK_OBJECT(par_destination_kind);
    Py_DECREF(par_destination_kind);
    CHECK_OBJECT(par_source_kind);
    Py_DECREF(par_source_kind);
    CHECK_OBJECT(par_x_offset);
    Py_DECREF(par_x_offset);
    CHECK_OBJECT(par_y_offset);
    Py_DECREF(par_y_offset);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_operation);
    Py_DECREF(par_operation);
    CHECK_OBJECT(par_destination_kind);
    Py_DECREF(par_destination_kind);
    CHECK_OBJECT(par_source_kind);
    Py_DECREF(par_source_kind);
    CHECK_OBJECT(par_x_offset);
    Py_DECREF(par_x_offset);
    CHECK_OBJECT(par_y_offset);
    Py_DECREF(par_y_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__3_get_rectangles(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_source_kind = python_pars[1];
    struct Nuitka_FrameObject *frame_9c7ab610cc239950bcb05718fa89c42a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c7ab610cc239950bcb05718fa89c42a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c7ab610cc239950bcb05718fa89c42a)) {
        Py_XDECREF(cache_frame_9c7ab610cc239950bcb05718fa89c42a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c7ab610cc239950bcb05718fa89c42a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c7ab610cc239950bcb05718fa89c42a = MAKE_FUNCTION_FRAME(codeobj_9c7ab610cc239950bcb05718fa89c42a, module_Xlib$ext$shape, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9c7ab610cc239950bcb05718fa89c42a->m_type_description == NULL);
    frame_9c7ab610cc239950bcb05718fa89c42a = cache_frame_9c7ab610cc239950bcb05718fa89c42a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9c7ab610cc239950bcb05718fa89c42a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9c7ab610cc239950bcb05718fa89c42a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9c7ab610cc239950bcb05718fa89c42a->m_frame.f_lineno = 218;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_2_1 = par_self;
        CHECK_OBJECT(par_source_kind);
        tmp_kw_call_value_3_1 = par_source_kind;
        frame_9c7ab610cc239950bcb05718fa89c42a->m_frame.f_lineno = 216;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c7ab610cc239950bcb05718fa89c42a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c7ab610cc239950bcb05718fa89c42a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c7ab610cc239950bcb05718fa89c42a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c7ab610cc239950bcb05718fa89c42a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c7ab610cc239950bcb05718fa89c42a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c7ab610cc239950bcb05718fa89c42a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c7ab610cc239950bcb05718fa89c42a,
        type_description_1,
        par_self,
        par_source_kind
    );


    // Release cached frame if used for exception.
    if (frame_9c7ab610cc239950bcb05718fa89c42a == cache_frame_9c7ab610cc239950bcb05718fa89c42a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9c7ab610cc239950bcb05718fa89c42a);
        cache_frame_9c7ab610cc239950bcb05718fa89c42a = NULL;
    }

    assertFrameObject(frame_9c7ab610cc239950bcb05718fa89c42a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source_kind);
    Py_DECREF(par_source_kind);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_source_kind);
    Py_DECREF(par_source_kind);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__4_input_selected(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_91118c4a7f82375c887b4efb4b1de75d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91118c4a7f82375c887b4efb4b1de75d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91118c4a7f82375c887b4efb4b1de75d)) {
        Py_XDECREF(cache_frame_91118c4a7f82375c887b4efb4b1de75d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91118c4a7f82375c887b4efb4b1de75d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91118c4a7f82375c887b4efb4b1de75d = MAKE_FUNCTION_FRAME(codeobj_91118c4a7f82375c887b4efb4b1de75d, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_91118c4a7f82375c887b4efb4b1de75d->m_type_description == NULL);
    frame_91118c4a7f82375c887b4efb4b1de75d = cache_frame_91118c4a7f82375c887b4efb4b1de75d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_91118c4a7f82375c887b4efb4b1de75d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_91118c4a7f82375c887b4efb4b1de75d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_91118c4a7f82375c887b4efb4b1de75d->m_frame.f_lineno = 226;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_2_1 = par_self;
        frame_91118c4a7f82375c887b4efb4b1de75d->m_frame.f_lineno = 224;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_91118c4a7f82375c887b4efb4b1de75d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_91118c4a7f82375c887b4efb4b1de75d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_91118c4a7f82375c887b4efb4b1de75d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_91118c4a7f82375c887b4efb4b1de75d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91118c4a7f82375c887b4efb4b1de75d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91118c4a7f82375c887b4efb4b1de75d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91118c4a7f82375c887b4efb4b1de75d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_91118c4a7f82375c887b4efb4b1de75d == cache_frame_91118c4a7f82375c887b4efb4b1de75d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_91118c4a7f82375c887b4efb4b1de75d);
        cache_frame_91118c4a7f82375c887b4efb4b1de75d = NULL;
    }

    assertFrameObject(frame_91118c4a7f82375c887b4efb4b1de75d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__5_mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_operation = python_pars[1];
    PyObject *par_destination_kind = python_pars[2];
    PyObject *par_x_offset = python_pars[3];
    PyObject *par_y_offset = python_pars[4];
    PyObject *par_source_bitmap = python_pars[5];
    struct Nuitka_FrameObject *frame_3de0957003e5b7e528558a96581c02e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3de0957003e5b7e528558a96581c02e4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3de0957003e5b7e528558a96581c02e4)) {
        Py_XDECREF(cache_frame_3de0957003e5b7e528558a96581c02e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3de0957003e5b7e528558a96581c02e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3de0957003e5b7e528558a96581c02e4 = MAKE_FUNCTION_FRAME(codeobj_3de0957003e5b7e528558a96581c02e4, module_Xlib$ext$shape, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3de0957003e5b7e528558a96581c02e4->m_type_description == NULL);
    frame_3de0957003e5b7e528558a96581c02e4 = cache_frame_3de0957003e5b7e528558a96581c02e4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3de0957003e5b7e528558a96581c02e4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3de0957003e5b7e528558a96581c02e4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_3de0957003e5b7e528558a96581c02e4->m_frame.f_lineno = 233;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_2_1 = par_self;
        CHECK_OBJECT(par_operation);
        tmp_kw_call_value_3_1 = par_operation;
        CHECK_OBJECT(par_destination_kind);
        tmp_kw_call_value_4_1 = par_destination_kind;
        CHECK_OBJECT(par_x_offset);
        tmp_kw_call_value_5_1 = par_x_offset;
        CHECK_OBJECT(par_y_offset);
        tmp_kw_call_value_6_1 = par_y_offset;
        CHECK_OBJECT(par_source_bitmap);
        tmp_kw_call_value_7_1 = par_source_bitmap;
        frame_3de0957003e5b7e528558a96581c02e4->m_frame.f_lineno = 231;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3de0957003e5b7e528558a96581c02e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3de0957003e5b7e528558a96581c02e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3de0957003e5b7e528558a96581c02e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3de0957003e5b7e528558a96581c02e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3de0957003e5b7e528558a96581c02e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3de0957003e5b7e528558a96581c02e4,
        type_description_1,
        par_self,
        par_operation,
        par_destination_kind,
        par_x_offset,
        par_y_offset,
        par_source_bitmap
    );


    // Release cached frame if used for exception.
    if (frame_3de0957003e5b7e528558a96581c02e4 == cache_frame_3de0957003e5b7e528558a96581c02e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3de0957003e5b7e528558a96581c02e4);
        cache_frame_3de0957003e5b7e528558a96581c02e4 = NULL;
    }

    assertFrameObject(frame_3de0957003e5b7e528558a96581c02e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_operation);
    Py_DECREF(par_operation);
    CHECK_OBJECT(par_destination_kind);
    Py_DECREF(par_destination_kind);
    CHECK_OBJECT(par_x_offset);
    Py_DECREF(par_x_offset);
    CHECK_OBJECT(par_y_offset);
    Py_DECREF(par_y_offset);
    CHECK_OBJECT(par_source_bitmap);
    Py_DECREF(par_source_bitmap);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_operation);
    Py_DECREF(par_operation);
    CHECK_OBJECT(par_destination_kind);
    Py_DECREF(par_destination_kind);
    CHECK_OBJECT(par_x_offset);
    Py_DECREF(par_x_offset);
    CHECK_OBJECT(par_y_offset);
    Py_DECREF(par_y_offset);
    CHECK_OBJECT(par_source_bitmap);
    Py_DECREF(par_source_bitmap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__6_offset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_destination_kind = python_pars[1];
    PyObject *par_x_offset = python_pars[2];
    PyObject *par_y_offset = python_pars[3];
    struct Nuitka_FrameObject *frame_0fcdf04b8c7c390af7c215bc76c5610f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0fcdf04b8c7c390af7c215bc76c5610f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0fcdf04b8c7c390af7c215bc76c5610f)) {
        Py_XDECREF(cache_frame_0fcdf04b8c7c390af7c215bc76c5610f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0fcdf04b8c7c390af7c215bc76c5610f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0fcdf04b8c7c390af7c215bc76c5610f = MAKE_FUNCTION_FRAME(codeobj_0fcdf04b8c7c390af7c215bc76c5610f, module_Xlib$ext$shape, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0fcdf04b8c7c390af7c215bc76c5610f->m_type_description == NULL);
    frame_0fcdf04b8c7c390af7c215bc76c5610f = cache_frame_0fcdf04b8c7c390af7c215bc76c5610f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0fcdf04b8c7c390af7c215bc76c5610f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0fcdf04b8c7c390af7c215bc76c5610f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0fcdf04b8c7c390af7c215bc76c5610f->m_frame.f_lineno = 245;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_2_1 = par_self;
        CHECK_OBJECT(par_destination_kind);
        tmp_kw_call_value_3_1 = par_destination_kind;
        CHECK_OBJECT(par_x_offset);
        tmp_kw_call_value_4_1 = par_x_offset;
        CHECK_OBJECT(par_y_offset);
        tmp_kw_call_value_5_1 = par_y_offset;
        frame_0fcdf04b8c7c390af7c215bc76c5610f->m_frame.f_lineno = 243;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0fcdf04b8c7c390af7c215bc76c5610f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0fcdf04b8c7c390af7c215bc76c5610f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0fcdf04b8c7c390af7c215bc76c5610f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0fcdf04b8c7c390af7c215bc76c5610f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0fcdf04b8c7c390af7c215bc76c5610f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0fcdf04b8c7c390af7c215bc76c5610f,
        type_description_1,
        par_self,
        par_destination_kind,
        par_x_offset,
        par_y_offset
    );


    // Release cached frame if used for exception.
    if (frame_0fcdf04b8c7c390af7c215bc76c5610f == cache_frame_0fcdf04b8c7c390af7c215bc76c5610f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0fcdf04b8c7c390af7c215bc76c5610f);
        cache_frame_0fcdf04b8c7c390af7c215bc76c5610f = NULL;
    }

    assertFrameObject(frame_0fcdf04b8c7c390af7c215bc76c5610f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_destination_kind);
    Py_DECREF(par_destination_kind);
    CHECK_OBJECT(par_x_offset);
    Py_DECREF(par_x_offset);
    CHECK_OBJECT(par_y_offset);
    Py_DECREF(par_y_offset);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_destination_kind);
    Py_DECREF(par_destination_kind);
    CHECK_OBJECT(par_x_offset);
    Py_DECREF(par_x_offset);
    CHECK_OBJECT(par_y_offset);
    Py_DECREF(par_y_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__7_query_extents(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2378d75bf49fd9cdaa0aa66096c9bdd5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5)) {
        Py_XDECREF(cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5 = MAKE_FUNCTION_FRAME(codeobj_2378d75bf49fd9cdaa0aa66096c9bdd5, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5->m_type_description == NULL);
    frame_2378d75bf49fd9cdaa0aa66096c9bdd5 = cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2378d75bf49fd9cdaa0aa66096c9bdd5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2378d75bf49fd9cdaa0aa66096c9bdd5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2378d75bf49fd9cdaa0aa66096c9bdd5->m_frame.f_lineno = 255;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_2_1 = par_self;
        frame_2378d75bf49fd9cdaa0aa66096c9bdd5->m_frame.f_lineno = 253;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2378d75bf49fd9cdaa0aa66096c9bdd5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2378d75bf49fd9cdaa0aa66096c9bdd5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2378d75bf49fd9cdaa0aa66096c9bdd5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2378d75bf49fd9cdaa0aa66096c9bdd5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2378d75bf49fd9cdaa0aa66096c9bdd5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2378d75bf49fd9cdaa0aa66096c9bdd5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2378d75bf49fd9cdaa0aa66096c9bdd5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2378d75bf49fd9cdaa0aa66096c9bdd5 == cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5);
        cache_frame_2378d75bf49fd9cdaa0aa66096c9bdd5 = NULL;
    }

    assertFrameObject(frame_2378d75bf49fd9cdaa0aa66096c9bdd5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__8_query_version(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_60d31ab3c81067dab05b0626f410df47;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60d31ab3c81067dab05b0626f410df47 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_60d31ab3c81067dab05b0626f410df47)) {
        Py_XDECREF(cache_frame_60d31ab3c81067dab05b0626f410df47);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60d31ab3c81067dab05b0626f410df47 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60d31ab3c81067dab05b0626f410df47 = MAKE_FUNCTION_FRAME(codeobj_60d31ab3c81067dab05b0626f410df47, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_60d31ab3c81067dab05b0626f410df47->m_type_description == NULL);
    frame_60d31ab3c81067dab05b0626f410df47 = cache_frame_60d31ab3c81067dab05b0626f410df47;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_60d31ab3c81067dab05b0626f410df47);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_60d31ab3c81067dab05b0626f410df47) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_60d31ab3c81067dab05b0626f410df47->m_frame.f_lineno = 262;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_60d31ab3c81067dab05b0626f410df47->m_frame.f_lineno = 260;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60d31ab3c81067dab05b0626f410df47);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_60d31ab3c81067dab05b0626f410df47);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60d31ab3c81067dab05b0626f410df47);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60d31ab3c81067dab05b0626f410df47, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60d31ab3c81067dab05b0626f410df47->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60d31ab3c81067dab05b0626f410df47, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60d31ab3c81067dab05b0626f410df47,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_60d31ab3c81067dab05b0626f410df47 == cache_frame_60d31ab3c81067dab05b0626f410df47) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_60d31ab3c81067dab05b0626f410df47);
        cache_frame_60d31ab3c81067dab05b0626f410df47 = NULL;
    }

    assertFrameObject(frame_60d31ab3c81067dab05b0626f410df47);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__9_rectangles(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_operation = python_pars[1];
    PyObject *par_destination_kind = python_pars[2];
    PyObject *par_ordering = python_pars[3];
    PyObject *par_x_offset = python_pars[4];
    PyObject *par_y_offset = python_pars[5];
    PyObject *par_rectangles = python_pars[6];
    struct Nuitka_FrameObject *frame_233cf859558995d6e00594e6d3a1945d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_233cf859558995d6e00594e6d3a1945d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_233cf859558995d6e00594e6d3a1945d)) {
        Py_XDECREF(cache_frame_233cf859558995d6e00594e6d3a1945d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_233cf859558995d6e00594e6d3a1945d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_233cf859558995d6e00594e6d3a1945d = MAKE_FUNCTION_FRAME(codeobj_233cf859558995d6e00594e6d3a1945d, module_Xlib$ext$shape, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_233cf859558995d6e00594e6d3a1945d->m_type_description == NULL);
    frame_233cf859558995d6e00594e6d3a1945d = cache_frame_233cf859558995d6e00594e6d3a1945d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_233cf859558995d6e00594e6d3a1945d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_233cf859558995d6e00594e6d3a1945d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_233cf859558995d6e00594e6d3a1945d->m_frame.f_lineno = 268;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_2_1 = par_self;
        CHECK_OBJECT(par_operation);
        tmp_kw_call_value_3_1 = par_operation;
        CHECK_OBJECT(par_destination_kind);
        tmp_kw_call_value_4_1 = par_destination_kind;
        CHECK_OBJECT(par_ordering);
        tmp_kw_call_value_5_1 = par_ordering;
        CHECK_OBJECT(par_x_offset);
        tmp_kw_call_value_6_1 = par_x_offset;
        CHECK_OBJECT(par_y_offset);
        tmp_kw_call_value_7_1 = par_y_offset;
        CHECK_OBJECT(par_rectangles);
        tmp_kw_call_value_8_1 = par_rectangles;
        frame_233cf859558995d6e00594e6d3a1945d->m_frame.f_lineno = 266;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[25]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_233cf859558995d6e00594e6d3a1945d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_233cf859558995d6e00594e6d3a1945d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_233cf859558995d6e00594e6d3a1945d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_233cf859558995d6e00594e6d3a1945d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_233cf859558995d6e00594e6d3a1945d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_233cf859558995d6e00594e6d3a1945d,
        type_description_1,
        par_self,
        par_operation,
        par_destination_kind,
        par_ordering,
        par_x_offset,
        par_y_offset,
        par_rectangles
    );


    // Release cached frame if used for exception.
    if (frame_233cf859558995d6e00594e6d3a1945d == cache_frame_233cf859558995d6e00594e6d3a1945d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_233cf859558995d6e00594e6d3a1945d);
        cache_frame_233cf859558995d6e00594e6d3a1945d = NULL;
    }

    assertFrameObject(frame_233cf859558995d6e00594e6d3a1945d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_operation);
    Py_DECREF(par_operation);
    CHECK_OBJECT(par_destination_kind);
    Py_DECREF(par_destination_kind);
    CHECK_OBJECT(par_ordering);
    Py_DECREF(par_ordering);
    CHECK_OBJECT(par_x_offset);
    Py_DECREF(par_x_offset);
    CHECK_OBJECT(par_y_offset);
    Py_DECREF(par_y_offset);
    CHECK_OBJECT(par_rectangles);
    Py_DECREF(par_rectangles);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_operation);
    Py_DECREF(par_operation);
    CHECK_OBJECT(par_destination_kind);
    Py_DECREF(par_destination_kind);
    CHECK_OBJECT(par_ordering);
    Py_DECREF(par_ordering);
    CHECK_OBJECT(par_x_offset);
    Py_DECREF(par_x_offset);
    CHECK_OBJECT(par_y_offset);
    Py_DECREF(par_y_offset);
    CHECK_OBJECT(par_rectangles);
    Py_DECREF(par_rectangles);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__10_select_input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_enable = python_pars[1];
    struct Nuitka_FrameObject *frame_44133ff6b87491686cc253592f035acd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_44133ff6b87491686cc253592f035acd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_44133ff6b87491686cc253592f035acd)) {
        Py_XDECREF(cache_frame_44133ff6b87491686cc253592f035acd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44133ff6b87491686cc253592f035acd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44133ff6b87491686cc253592f035acd = MAKE_FUNCTION_FRAME(codeobj_44133ff6b87491686cc253592f035acd, module_Xlib$ext$shape, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_44133ff6b87491686cc253592f035acd->m_type_description == NULL);
    frame_44133ff6b87491686cc253592f035acd = cache_frame_44133ff6b87491686cc253592f035acd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_44133ff6b87491686cc253592f035acd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_44133ff6b87491686cc253592f035acd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_44133ff6b87491686cc253592f035acd->m_frame.f_lineno = 281;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_2_1 = par_self;
        CHECK_OBJECT(par_enable);
        tmp_kw_call_value_3_1 = par_enable;
        frame_44133ff6b87491686cc253592f035acd->m_frame.f_lineno = 279;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[27]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_44133ff6b87491686cc253592f035acd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_44133ff6b87491686cc253592f035acd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44133ff6b87491686cc253592f035acd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44133ff6b87491686cc253592f035acd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44133ff6b87491686cc253592f035acd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44133ff6b87491686cc253592f035acd,
        type_description_1,
        par_self,
        par_enable
    );


    // Release cached frame if used for exception.
    if (frame_44133ff6b87491686cc253592f035acd == cache_frame_44133ff6b87491686cc253592f035acd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_44133ff6b87491686cc253592f035acd);
        cache_frame_44133ff6b87491686cc253592f035acd = NULL;
    }

    assertFrameObject(frame_44133ff6b87491686cc253592f035acd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_enable);
    Py_DECREF(par_enable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_enable);
    Py_DECREF(par_enable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$shape$$$function__11_init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_disp = python_pars[0];
    PyObject *par_info = python_pars[1];
    struct Nuitka_FrameObject *frame_5eb1de2f379b3236d9c4bcfdc86d439e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e)) {
        Py_XDECREF(cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e = MAKE_FUNCTION_FRAME(codeobj_5eb1de2f379b3236d9c4bcfdc86d439e, module_Xlib$ext$shape, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_type_description == NULL);
    frame_5eb1de2f379b3236d9c4bcfdc86d439e = cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5eb1de2f379b3236d9c4bcfdc86d439e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5eb1de2f379b3236d9c4bcfdc86d439e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_1 = par_disp;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_args_element_value_2 = mod_consts[30];
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_2 = par_disp;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[29];
        tmp_args_element_value_5 = mod_consts[32];
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_3 = par_disp;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[29];
        tmp_args_element_value_8 = mod_consts[34];
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_4 = par_disp;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[29];
        tmp_args_element_value_11 = mod_consts[36];
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_5 = par_disp;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[28]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[29];
        tmp_args_element_value_14 = mod_consts[38];
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_6 = par_disp;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[29];
        tmp_args_element_value_17 = mod_consts[40];
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_7 = par_disp;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[9];
        tmp_args_element_value_20 = mod_consts[42];
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_8 = par_disp;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[28]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[29];
        tmp_args_element_value_23 = mod_consts[44];
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_9 = par_disp;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[28]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[29];
        tmp_args_element_value_26 = mod_consts[46];
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_10 = par_disp;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[48]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_info);
        tmp_expression_value_11 = par_info;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[49]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[51]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_28);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = mod_consts[53];
        frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5eb1de2f379b3236d9c4bcfdc86d439e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5eb1de2f379b3236d9c4bcfdc86d439e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5eb1de2f379b3236d9c4bcfdc86d439e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5eb1de2f379b3236d9c4bcfdc86d439e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5eb1de2f379b3236d9c4bcfdc86d439e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5eb1de2f379b3236d9c4bcfdc86d439e,
        type_description_1,
        par_disp,
        par_info
    );


    // Release cached frame if used for exception.
    if (frame_5eb1de2f379b3236d9c4bcfdc86d439e == cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e);
        cache_frame_5eb1de2f379b3236d9c4bcfdc86d439e = NULL;
    }

    assertFrameObject(frame_5eb1de2f379b3236d9c4bcfdc86d439e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__10_select_input() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__10_select_input,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_44133ff6b87491686cc253592f035acd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__11_init() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__11_init,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5eb1de2f379b3236d9c4bcfdc86d439e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_2e65cb0d8016a26582ed51c1f1e79d84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__2_combine() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__2_combine,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9419e9028140a90909f17cf1b016ec4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__3_get_rectangles() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__3_get_rectangles,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9c7ab610cc239950bcb05718fa89c42a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__4_input_selected() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__4_input_selected,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_91118c4a7f82375c887b4efb4b1de75d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__5_mask() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__5_mask,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3de0957003e5b7e528558a96581c02e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__6_offset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__6_offset,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0fcdf04b8c7c390af7c215bc76c5610f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__7_query_extents() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__7_query_extents,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2378d75bf49fd9cdaa0aa66096c9bdd5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__8_query_version() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__8_query_version,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_60d31ab3c81067dab05b0626f410df47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$shape$$$function__9_rectangles() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$shape$$$function__9_rectangles,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_233cf859558995d6e00594e6d3a1945d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$shape,
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

function_impl_code functable_Xlib$ext$shape[] = {
    impl_Xlib$ext$shape$$$function__1___init__,
    impl_Xlib$ext$shape$$$function__2_combine,
    impl_Xlib$ext$shape$$$function__3_get_rectangles,
    impl_Xlib$ext$shape$$$function__4_input_selected,
    impl_Xlib$ext$shape$$$function__5_mask,
    impl_Xlib$ext$shape$$$function__6_offset,
    impl_Xlib$ext$shape$$$function__7_query_extents,
    impl_Xlib$ext$shape$$$function__8_query_version,
    impl_Xlib$ext$shape$$$function__9_rectangles,
    impl_Xlib$ext$shape$$$function__10_select_input,
    impl_Xlib$ext$shape$$$function__11_init,
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

    function_impl_code *current = functable_Xlib$ext$shape;
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

    if (offset > sizeof(functable_Xlib$ext$shape) || offset < 0) {
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
        functable_Xlib$ext$shape[offset],
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
        module_Xlib$ext$shape,
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
PyObject *modulecode_Xlib$ext$shape(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Xlib.ext.shape");

    // Store the module for future use.
    module_Xlib$ext$shape = module;

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
        PRINT_STRING("Xlib.ext.shape: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.ext.shape: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.ext.shape: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initXlib$ext$shape\n");

    moduledict_Xlib$ext$shape = MODULE_DICT(module_Xlib$ext$shape);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Xlib$ext$shape,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Xlib$ext$shape,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[173]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Xlib$ext$shape,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$ext$shape,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$ext$shape,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Xlib$ext$shape);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Xlib$ext$shape);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_efe4a631f85ec7ba8e746824491205f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_Xlib$ext$shape$$$class__1_SO_11 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_eaab6454c2287689010d09e4f8ecc53c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_eaab6454c2287689010d09e4f8ecc53c_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_Xlib$ext$shape$$$class__2_SK_18 = NULL;
    struct Nuitka_FrameObject *frame_8ee4fc0523026f34793344185b33b665_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8ee4fc0523026f34793344185b33b665_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_Xlib$ext$shape$$$class__3_KIND_23 = NULL;
    struct Nuitka_FrameObject *frame_d3f2f267398176b99ea442dee8df7de0_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d3f2f267398176b99ea442dee8df7de0_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_Xlib$ext$shape$$$class__4_NotifyEventData_31 = NULL;
    struct Nuitka_FrameObject *frame_520cde06b35387cfebe44d3779ba8086_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_520cde06b35387cfebe44d3779ba8086_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_Xlib$ext$shape$$$class__5_QueryVersion_47 = NULL;
    struct Nuitka_FrameObject *frame_2a73fabed2f662c08960f4eb2d80a1fb_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_Xlib$ext$shape$$$class__6_Rectangles_64 = NULL;
    struct Nuitka_FrameObject *frame_ca3858fa1671d143f2aaf30763d2e44e_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_Xlib$ext$shape$$$class__7_Mask_80 = NULL;
    struct Nuitka_FrameObject *frame_b12ba2d14e0f93f979709de5172e7ea1_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_Xlib$ext$shape$$$class__8_Combine_95 = NULL;
    struct Nuitka_FrameObject *frame_0c71c70bd1417ca0295128c05af2363c_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0c71c70bd1417ca0295128c05af2363c_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_Xlib$ext$shape$$$class__9_Offset_111 = NULL;
    struct Nuitka_FrameObject *frame_3b0529aadcd768b9f874fd71930b6f6e_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_Xlib$ext$shape$$$class__10_QueryExtents_124 = NULL;
    struct Nuitka_FrameObject *frame_2ef8d45672f80ce4b139df698e94c778_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2ef8d45672f80ce4b139df698e94c778_11 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_Xlib$ext$shape$$$class__11_SelectInput_151 = NULL;
    struct Nuitka_FrameObject *frame_cb565ab40cecdd3d9113f9ed51d9b842_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *locals_Xlib$ext$shape$$$class__12_InputSelected_162 = NULL;
    struct Nuitka_FrameObject *frame_554fe7a3155806abc64b44fd8bba6bfe_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    static struct Nuitka_FrameObject *cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13 = NULL;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *locals_Xlib$ext$shape$$$class__13_GetRectangles_178 = NULL;
    struct Nuitka_FrameObject *frame_281bb888ea9f1c2f7a6d6d0256b09498_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    static struct Nuitka_FrameObject *cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *locals_Xlib$ext$shape$$$class__14_Event_199 = NULL;
    struct Nuitka_FrameObject *frame_31daf2f1ae1ce31897257370825a3446_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    static struct Nuitka_FrameObject *cache_frame_31daf2f1ae1ce31897257370825a3446_15 = NULL;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_efe4a631f85ec7ba8e746824491205f7 = MAKE_MODULE_FRAME(codeobj_efe4a631f85ec7ba8e746824491205f7, module_Xlib$ext$shape);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_efe4a631f85ec7ba8e746824491205f7);
    assert(Py_REFCNT(frame_efe4a631f85ec7ba8e746824491205f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[55];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[58], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[59], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[61];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Xlib$ext$shape;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[62];
        tmp_level_value_1 = mod_consts[63];
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_Xlib$ext$shape,
                mod_consts[64],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[64]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_Xlib$ext$shape,
                mod_consts[65],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[65]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_6);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[69];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        tmp_bases_value_1 = mod_consts[70];
        tmp_assign_source_10 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[71]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        tmp_args_value_1 = mod_consts[72];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 11;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[73]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[75];
        tmp_getattr_default_1 = mod_consts[76];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[75]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 11;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_Xlib$ext$shape$$$class__1_SO_11 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__1_SO_11, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__1_SO_11, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_eaab6454c2287689010d09e4f8ecc53c_2)) {
            Py_XDECREF(cache_frame_eaab6454c2287689010d09e4f8ecc53c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_eaab6454c2287689010d09e4f8ecc53c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_eaab6454c2287689010d09e4f8ecc53c_2 = MAKE_FUNCTION_FRAME(codeobj_eaab6454c2287689010d09e4f8ecc53c, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_eaab6454c2287689010d09e4f8ecc53c_2->m_type_description == NULL);
        frame_eaab6454c2287689010d09e4f8ecc53c_2 = cache_frame_eaab6454c2287689010d09e4f8ecc53c_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_eaab6454c2287689010d09e4f8ecc53c_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_eaab6454c2287689010d09e4f8ecc53c_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__1_SO_11, mod_consts[81], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__1_SO_11, mod_consts[82], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__1_SO_11, mod_consts[84], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__1_SO_11, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__1_SO_11, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_eaab6454c2287689010d09e4f8ecc53c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_eaab6454c2287689010d09e4f8ecc53c_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eaab6454c2287689010d09e4f8ecc53c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eaab6454c2287689010d09e4f8ecc53c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eaab6454c2287689010d09e4f8ecc53c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eaab6454c2287689010d09e4f8ecc53c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_eaab6454c2287689010d09e4f8ecc53c_2 == cache_frame_eaab6454c2287689010d09e4f8ecc53c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_eaab6454c2287689010d09e4f8ecc53c_2);
            cache_frame_eaab6454c2287689010d09e4f8ecc53c_2 = NULL;
        }

        assertFrameObject(frame_eaab6454c2287689010d09e4f8ecc53c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[79];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[70];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_Xlib$ext$shape$$$class__1_SO_11;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 11;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__1_SO_11);
        locals_Xlib$ext$shape$$$class__1_SO_11 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__1_SO_11);
        locals_Xlib$ext$shape$$$class__1_SO_11 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 11;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_13);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[69];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        condexpr_end_2:;
        tmp_bases_value_2 = mod_consts[70];
        tmp_assign_source_16 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 18;

        goto try_except_handler_5;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_6 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[71]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[71]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_5;
        }
        tmp_args_value_3 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 18;
        tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_8 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[73]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[75];
        tmp_getattr_default_2 = mod_consts[76];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[75]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 18;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_18;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_Xlib$ext$shape$$$class__2_SK_18 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__2_SK_18, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[3];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__2_SK_18, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_8ee4fc0523026f34793344185b33b665_3)) {
            Py_XDECREF(cache_frame_8ee4fc0523026f34793344185b33b665_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8ee4fc0523026f34793344185b33b665_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8ee4fc0523026f34793344185b33b665_3 = MAKE_FUNCTION_FRAME(codeobj_8ee4fc0523026f34793344185b33b665, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_8ee4fc0523026f34793344185b33b665_3->m_type_description == NULL);
        frame_8ee4fc0523026f34793344185b33b665_3 = cache_frame_8ee4fc0523026f34793344185b33b665_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8ee4fc0523026f34793344185b33b665_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8ee4fc0523026f34793344185b33b665_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__2_SK_18, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__2_SK_18, mod_consts[5], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__2_SK_18, mod_consts[6], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8ee4fc0523026f34793344185b33b665_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8ee4fc0523026f34793344185b33b665_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8ee4fc0523026f34793344185b33b665_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8ee4fc0523026f34793344185b33b665_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8ee4fc0523026f34793344185b33b665_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8ee4fc0523026f34793344185b33b665_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_8ee4fc0523026f34793344185b33b665_3 == cache_frame_8ee4fc0523026f34793344185b33b665_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_8ee4fc0523026f34793344185b33b665_3);
            cache_frame_8ee4fc0523026f34793344185b33b665_3 = NULL;
        }

        assertFrameObject(frame_8ee4fc0523026f34793344185b33b665_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = mod_consts[3];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[70];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_Xlib$ext$shape$$$class__2_SK_18;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 18;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_19 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__2_SK_18);
        locals_Xlib$ext$shape$$$class__2_SK_18 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__2_SK_18);
        locals_Xlib$ext$shape$$$class__2_SK_18 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 18;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_19);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[81]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_assign_source_21 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_21, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[69];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_condition_result_10 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_11 = tmp_class_creation_3__bases;
        tmp_subscript_value_1 = mod_consts[63];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_1, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 23;

        goto try_except_handler_8;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[71]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[71]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_tuple_element_6 = mod_consts[0];
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_6 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 23;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[73]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[75];
        tmp_getattr_default_3 = mod_consts[76];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[75]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_26;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_Xlib$ext$shape$$$class__3_KIND_23 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__3_KIND_23, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__3_KIND_23, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_10;
        }
        if (isFrameUnusable(cache_frame_d3f2f267398176b99ea442dee8df7de0_4)) {
            Py_XDECREF(cache_frame_d3f2f267398176b99ea442dee8df7de0_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d3f2f267398176b99ea442dee8df7de0_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d3f2f267398176b99ea442dee8df7de0_4 = MAKE_FUNCTION_FRAME(codeobj_d3f2f267398176b99ea442dee8df7de0, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d3f2f267398176b99ea442dee8df7de0_4->m_type_description == NULL);
        frame_d3f2f267398176b99ea442dee8df7de0_4 = cache_frame_d3f2f267398176b99ea442dee8df7de0_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d3f2f267398176b99ea442dee8df7de0_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d3f2f267398176b99ea442dee8df7de0_4) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_Xlib$ext$shape$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__3_KIND_23, mod_consts[1], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d3f2f267398176b99ea442dee8df7de0_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d3f2f267398176b99ea442dee8df7de0_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d3f2f267398176b99ea442dee8df7de0_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d3f2f267398176b99ea442dee8df7de0_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d3f2f267398176b99ea442dee8df7de0_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d3f2f267398176b99ea442dee8df7de0_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d3f2f267398176b99ea442dee8df7de0_4 == cache_frame_d3f2f267398176b99ea442dee8df7de0_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d3f2f267398176b99ea442dee8df7de0_4);
            cache_frame_d3f2f267398176b99ea442dee8df7de0_4 = NULL;
        }

        assertFrameObject(frame_d3f2f267398176b99ea442dee8df7de0_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__3_KIND_23, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_10;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_8 = mod_consts[0];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_8 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_Xlib$ext$shape$$$class__3_KIND_23;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 23;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_27 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__3_KIND_23);
        locals_Xlib$ext$shape$$$class__3_KIND_23 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__3_KIND_23);
        locals_Xlib$ext$shape$$$class__3_KIND_23 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 23;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_27);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[50]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        tmp_assign_source_29 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_29, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_30 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_15;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[69];
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }
        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        tmp_condition_result_16 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_17 = tmp_class_creation_4__bases;
        tmp_subscript_value_2 = mod_consts[63];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_2, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 31;

        goto try_except_handler_11;
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[71]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_19 = tmp_class_creation_4__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[71]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        tmp_tuple_element_10 = mod_consts[52];
        tmp_args_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_10 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 31;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_20 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[73]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[75];
        tmp_getattr_default_4 = mod_consts[76];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_6 = tmp_class_creation_4__prepared;
            tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_21 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[75]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 31;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_34;
    }
    branch_end_12:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_Xlib$ext$shape$$$class__4_NotifyEventData_31 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        if (isFrameUnusable(cache_frame_520cde06b35387cfebe44d3779ba8086_5)) {
            Py_XDECREF(cache_frame_520cde06b35387cfebe44d3779ba8086_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_520cde06b35387cfebe44d3779ba8086_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_520cde06b35387cfebe44d3779ba8086_5 = MAKE_FUNCTION_FRAME(codeobj_520cde06b35387cfebe44d3779ba8086, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_520cde06b35387cfebe44d3779ba8086_5->m_type_description == NULL);
        frame_520cde06b35387cfebe44d3779ba8086_5 = cache_frame_520cde06b35387cfebe44d3779ba8086_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_520cde06b35387cfebe44d3779ba8086_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_520cde06b35387cfebe44d3779ba8086_5) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[92], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_instance_10;
            tmp_expression_value_22 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[93]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_1 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 34;
            tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_1,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[94], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_value_9 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[0]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);

                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 35;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[95]);

            Py_DECREF(tmp_called_value_9);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_2 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);

                        exception_lineno = 36;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 36;
            tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_2,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[97], 0)
            );

            Py_DECREF(tmp_called_instance_2);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_3 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);

                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 37;
            tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_3,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[99], 0)
            );

            Py_DECREF(tmp_called_instance_3);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_4 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);

                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 38;
            tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_4,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[101], 0)
            );

            Py_DECREF(tmp_called_instance_4);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_5 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);
                        Py_DECREF(tmp_args_element_value_5);

                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_5);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 39;
            tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_5,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[102], 0)
            );

            Py_DECREF(tmp_called_instance_5);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_5);

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_6 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);
                        Py_DECREF(tmp_args_element_value_5);
                        Py_DECREF(tmp_args_element_value_6);

                        exception_lineno = 40;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_6);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 40;
            tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_6,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[103], 0)
            );

            Py_DECREF(tmp_called_instance_6);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_5);
                Py_DECREF(tmp_args_element_value_6);

                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_7 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);
                        Py_DECREF(tmp_args_element_value_5);
                        Py_DECREF(tmp_args_element_value_6);
                        Py_DECREF(tmp_args_element_value_7);

                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 41;
            tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_7,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[104], 0)
            );

            Py_DECREF(tmp_called_instance_7);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_5);
                Py_DECREF(tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_8 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);
                        Py_DECREF(tmp_args_element_value_5);
                        Py_DECREF(tmp_args_element_value_6);
                        Py_DECREF(tmp_args_element_value_7);
                        Py_DECREF(tmp_args_element_value_8);

                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 42;
            tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_8,
                mod_consts[105],
                PyTuple_GET_ITEM(mod_consts[106], 0)
            );

            Py_DECREF(tmp_called_instance_8);
            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_5);
                Py_DECREF(tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);

                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_9 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_9 == NULL)) {
                        tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);
                        Py_DECREF(tmp_args_element_value_5);
                        Py_DECREF(tmp_args_element_value_6);
                        Py_DECREF(tmp_args_element_value_7);
                        Py_DECREF(tmp_args_element_value_8);
                        Py_DECREF(tmp_args_element_value_9);

                        exception_lineno = 43;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_9);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 43;
            tmp_args_element_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_9,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[107], 0)
            );

            Py_DECREF(tmp_called_instance_9);
            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_5);
                Py_DECREF(tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_9);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_10 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[64]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);
                        Py_DECREF(tmp_args_element_value_5);
                        Py_DECREF(tmp_args_element_value_6);
                        Py_DECREF(tmp_args_element_value_7);
                        Py_DECREF(tmp_args_element_value_8);
                        Py_DECREF(tmp_args_element_value_9);
                        Py_DECREF(tmp_args_element_value_10);

                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_10);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 44;
            tmp_args_element_value_11 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_10,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[109], 0)
            );

            Py_DECREF(tmp_called_instance_10);
            if (tmp_args_element_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_5);
                Py_DECREF(tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_9);
                Py_DECREF(tmp_args_element_value_10);

                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_520cde06b35387cfebe44d3779ba8086_5->m_frame.f_lineno = 33;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS11(tmp_called_value_8, call_args);
            }

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_520cde06b35387cfebe44d3779ba8086_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_520cde06b35387cfebe44d3779ba8086_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_520cde06b35387cfebe44d3779ba8086_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_520cde06b35387cfebe44d3779ba8086_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_520cde06b35387cfebe44d3779ba8086_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_520cde06b35387cfebe44d3779ba8086_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_520cde06b35387cfebe44d3779ba8086_5 == cache_frame_520cde06b35387cfebe44d3779ba8086_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_520cde06b35387cfebe44d3779ba8086_5);
            cache_frame_520cde06b35387cfebe44d3779ba8086_5 = NULL;
        }

        assertFrameObject(frame_520cde06b35387cfebe44d3779ba8086_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_10 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_12 = mod_consts[52];
            tmp_args_value_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_Xlib$ext$shape$$$class__4_NotifyEventData_31;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 31;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_35 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31);
        locals_Xlib$ext$shape$$$class__4_NotifyEventData_31 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__4_NotifyEventData_31);
        locals_Xlib$ext$shape$$$class__4_NotifyEventData_31 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 31;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_35);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[111]);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_assign_source_37 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_37, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_38 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_5;
        bool tmp_condition_result_21;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_5;
        tmp_key_value_13 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[69];
        tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_metaclass_value_5 == NULL) {
            tmp_metaclass_value_5 = Py_None;
        }
        assert(!(tmp_metaclass_value_5 == NULL));
        Py_INCREF(tmp_metaclass_value_5);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_condition_result_22 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_24 = tmp_class_creation_5__bases;
        tmp_subscript_value_3 = mod_consts[63];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_24, tmp_subscript_value_3, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 47;

        goto try_except_handler_14;
    }
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_25 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_25, mod_consts[71]);
        tmp_condition_result_24 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_26 = tmp_class_creation_5__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[71]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_tuple_element_14 = mod_consts[22];
        tmp_args_value_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_14 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 47;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_27 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[73]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[75];
        tmp_getattr_default_5 = mod_consts[76];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_8 = tmp_class_creation_5__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[75]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 47;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_42;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_Xlib$ext$shape$$$class__5_QueryVersion_47 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[22];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_16;
        }
        if (isFrameUnusable(cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6)) {
            Py_XDECREF(cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6 = MAKE_FUNCTION_FRAME(codeobj_2a73fabed2f662c08960f4eb2d80a1fb, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_type_description == NULL);
        frame_2a73fabed2f662c08960f4eb2d80a1fb_6 = cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2a73fabed2f662c08960f4eb2d80a1fb_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2a73fabed2f662c08960f4eb2d80a1fb_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_instance_13;
            tmp_expression_value_29 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[93]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_11 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_11 == NULL)) {
                        tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_11);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 50;
            tmp_args_element_value_12 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_11,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_11);
            if (tmp_args_element_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_12 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_12 == NULL)) {
                        tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_args_element_value_12);

                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_12);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 51;
            tmp_args_element_value_13 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_12,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[114], 0)
            );

            Py_DECREF(tmp_called_instance_12);
            if (tmp_args_element_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);
                Py_DECREF(tmp_args_element_value_12);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_13 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_13 == NULL)) {
                        tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_args_element_value_12);
                        Py_DECREF(tmp_args_element_value_13);

                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_13);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 52;
            tmp_args_element_value_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[115]);
            Py_DECREF(tmp_called_instance_13);
            if (tmp_args_element_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);
                Py_DECREF(tmp_args_element_value_12);
                Py_DECREF(tmp_args_element_value_13);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
            }

            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_called_instance_19;
            tmp_expression_value_30 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[93]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_14 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_14 == NULL)) {
                        tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_14);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 56;
            tmp_args_element_value_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[117]);
            Py_DECREF(tmp_called_instance_14);
            if (tmp_args_element_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_15 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_15 == NULL)) {
                        tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_args_element_value_15);

                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_15);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 57;
            tmp_args_element_value_16 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_15,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[118], 0)
            );

            Py_DECREF(tmp_called_instance_15);
            if (tmp_args_element_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_15);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_16 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_16 == NULL)) {
                        tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_args_element_value_15);
                        Py_DECREF(tmp_args_element_value_16);

                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_16);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 58;
            tmp_args_element_value_17 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_16,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[97], 0)
            );

            Py_DECREF(tmp_called_instance_16);
            if (tmp_args_element_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_17 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_17 == NULL)) {
                        tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_args_element_value_15);
                        Py_DECREF(tmp_args_element_value_16);
                        Py_DECREF(tmp_args_element_value_17);

                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_17);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 59;
            tmp_args_element_value_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[119]);
            Py_DECREF(tmp_called_instance_17);
            if (tmp_args_element_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_17);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_18 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_18 == NULL)) {
                        tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_args_element_value_15);
                        Py_DECREF(tmp_args_element_value_16);
                        Py_DECREF(tmp_args_element_value_17);
                        Py_DECREF(tmp_args_element_value_18);

                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_18);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 60;
            tmp_args_element_value_19 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_18,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[120], 0)
            );

            Py_DECREF(tmp_called_instance_18);
            if (tmp_args_element_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_17);
                Py_DECREF(tmp_args_element_value_18);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_19 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[64]);

            if (tmp_called_instance_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_19 == NULL)) {
                        tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_args_element_value_15);
                        Py_DECREF(tmp_args_element_value_16);
                        Py_DECREF(tmp_args_element_value_17);
                        Py_DECREF(tmp_args_element_value_18);
                        Py_DECREF(tmp_args_element_value_19);

                        exception_lineno = 61;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_19);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 61;
            tmp_args_element_value_20 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_19,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[121], 0)
            );

            Py_DECREF(tmp_called_instance_19);
            if (tmp_args_element_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_17);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame.f_lineno = 55;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_13, call_args);
            }

            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2a73fabed2f662c08960f4eb2d80a1fb_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2a73fabed2f662c08960f4eb2d80a1fb_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2a73fabed2f662c08960f4eb2d80a1fb_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2a73fabed2f662c08960f4eb2d80a1fb_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2a73fabed2f662c08960f4eb2d80a1fb_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2a73fabed2f662c08960f4eb2d80a1fb_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_2a73fabed2f662c08960f4eb2d80a1fb_6 == cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6);
            cache_frame_2a73fabed2f662c08960f4eb2d80a1fb_6 = NULL;
        }

        assertFrameObject(frame_2a73fabed2f662c08960f4eb2d80a1fb_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__5_QueryVersion_47, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_16;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_14 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_16 = mod_consts[22];
            tmp_args_value_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_16 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_Xlib$ext$shape$$$class__5_QueryVersion_47;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 47;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_43 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__5_QueryVersion_47);
        locals_Xlib$ext$shape$$$class__5_QueryVersion_47 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__5_QueryVersion_47);
        locals_Xlib$ext$shape$$$class__5_QueryVersion_47 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 47;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_43);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_31;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[123]);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        tmp_assign_source_45 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_45, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_46 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_6;
        bool tmp_condition_result_27;
        PyObject *tmp_key_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        nuitka_bool tmp_condition_result_28;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_6;
        tmp_key_value_16 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_value_17 = mod_consts[69];
        tmp_metaclass_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_metaclass_value_6 == NULL) {
            tmp_metaclass_value_6 = Py_None;
        }
        assert(!(tmp_metaclass_value_6 == NULL));
        Py_INCREF(tmp_metaclass_value_6);
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        tmp_condition_result_28 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_32 = tmp_class_creation_6__bases;
        tmp_subscript_value_4 = mod_consts[63];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_4, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_key_value_18;
        PyObject *tmp_dict_arg_value_18;
        tmp_key_value_18 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 64;

        goto try_except_handler_17;
    }
    branch_no_19:;
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_33 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[71]);
        tmp_condition_result_30 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_34 = tmp_class_creation_6__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[71]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        tmp_tuple_element_18 = mod_consts[24];
        tmp_args_value_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_18 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 64;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_35 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[73]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[75];
        tmp_getattr_default_6 = mod_consts[76];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_10 = tmp_class_creation_6__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[75]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 64;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_21:;
    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_50;
    }
    branch_end_20:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_Xlib$ext$shape$$$class__6_Rectangles_64 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_19;
        }
        if (isFrameUnusable(cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7)) {
            Py_XDECREF(cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7 = MAKE_FUNCTION_FRAME(codeobj_ca3858fa1671d143f2aaf30763d2e44e, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_type_description == NULL);
        frame_ca3858fa1671d143f2aaf30763d2e44e_7 = cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ca3858fa1671d143f2aaf30763d2e44e_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ca3858fa1671d143f2aaf30763d2e44e_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_called_instance_23;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_12;
            tmp_expression_value_37 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[93]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_20 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_called_instance_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_20 == NULL)) {
                        tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_20);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 67;
            tmp_args_element_value_21 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_20,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_20);
            if (tmp_args_element_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_21 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_called_instance_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_21 == NULL)) {
                        tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);

                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_21);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 68;
            tmp_args_element_value_22 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_21,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[118], 0)
            );

            Py_DECREF(tmp_called_instance_21);
            if (tmp_args_element_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_22 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_called_instance_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_22 == NULL)) {
                        tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);

                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_22);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 69;
            tmp_args_element_value_23 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[115]);
            Py_DECREF(tmp_called_instance_22);
            if (tmp_args_element_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_value_17 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[68]);

            if (tmp_called_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_called_value_17 == NULL)) {
                        tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_called_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);
                        Py_DECREF(tmp_args_element_value_23);

                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_17);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 70;
            tmp_args_element_value_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[124]);

            Py_DECREF(tmp_called_value_17);
            if (tmp_args_element_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);

                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_value_18 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[0]);

            if (tmp_called_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_called_value_18 == NULL)) {
                        tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_called_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);

                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_18);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 71;
            tmp_args_element_value_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[125]);

            Py_DECREF(tmp_called_value_18);
            if (tmp_args_element_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                Py_DECREF(tmp_args_element_value_24);

                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_23 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_called_instance_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_23 == NULL)) {
                        tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);

                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_23);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 72;
            tmp_args_element_value_26 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_23,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[126], 0)
            );

            Py_DECREF(tmp_called_instance_23);
            if (tmp_args_element_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);

                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_24 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_called_instance_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_24 == NULL)) {
                        tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_26);

                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_24);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 73;
            tmp_args_element_value_27 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_24,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[118], 0)
            );

            Py_DECREF(tmp_called_instance_24);
            if (tmp_args_element_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_25 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_called_instance_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_25 == NULL)) {
                        tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_26);
                        Py_DECREF(tmp_args_element_value_27);

                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_25);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 74;
            tmp_args_element_value_28 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_25,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[127], 0)
            );

            Py_DECREF(tmp_called_instance_25);
            if (tmp_args_element_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_27);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_26 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_called_instance_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_26 == NULL)) {
                        tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_26);
                        Py_DECREF(tmp_args_element_value_27);
                        Py_DECREF(tmp_args_element_value_28);

                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_26);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 75;
            tmp_args_element_value_29 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_26,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[128], 0)
            );

            Py_DECREF(tmp_called_instance_26);
            if (tmp_args_element_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_27);
                Py_DECREF(tmp_args_element_value_28);

                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_27 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_called_instance_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_27 == NULL)) {
                        tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_26);
                        Py_DECREF(tmp_args_element_value_27);
                        Py_DECREF(tmp_args_element_value_28);
                        Py_DECREF(tmp_args_element_value_29);

                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_27);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 76;
            tmp_args_element_value_30 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_27,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[129], 0)
            );

            Py_DECREF(tmp_called_instance_27);
            if (tmp_args_element_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_27);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_expression_value_38 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[64]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_26);
                        Py_DECREF(tmp_args_element_value_27);
                        Py_DECREF(tmp_args_element_value_28);
                        Py_DECREF(tmp_args_element_value_29);
                        Py_DECREF(tmp_args_element_value_30);

                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[130]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_27);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_tuple_element_20 = mod_consts[45];
            tmp_args_value_12 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_39;
                PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_20);
                tmp_expression_value_39 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[65]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[131]);
                Py_DECREF(tmp_expression_value_39);
                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_value_12);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_kwargs_value_12 = PyDict_Copy(mod_consts[132]);
            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 77;
            tmp_args_element_value_31 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_value_12);
            Py_DECREF(tmp_kwargs_value_12);
            if (tmp_args_element_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_27);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame.f_lineno = 66;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS11(tmp_called_value_16, call_args);
            }

            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ca3858fa1671d143f2aaf30763d2e44e_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ca3858fa1671d143f2aaf30763d2e44e_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ca3858fa1671d143f2aaf30763d2e44e_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ca3858fa1671d143f2aaf30763d2e44e_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ca3858fa1671d143f2aaf30763d2e44e_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ca3858fa1671d143f2aaf30763d2e44e_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_ca3858fa1671d143f2aaf30763d2e44e_7 == cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7);
            cache_frame_ca3858fa1671d143f2aaf30763d2e44e_7 = NULL;
        }

        assertFrameObject(frame_ca3858fa1671d143f2aaf30763d2e44e_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
        }
        branch_yes_22:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__6_Rectangles_64, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_19;
        }
        branch_no_22:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_20 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_21 = mod_consts[24];
            tmp_args_value_13 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_21 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_Xlib$ext$shape$$$class__6_Rectangles_64;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_13 = tmp_class_creation_6__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 64;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_51 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__6_Rectangles_64);
        locals_Xlib$ext$shape$$$class__6_Rectangles_64 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__6_Rectangles_64);
        locals_Xlib$ext$shape$$$class__6_Rectangles_64 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 64;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_51);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_40;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[123]);
        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        tmp_assign_source_53 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_53, 0, tmp_tuple_element_22);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_54 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_value_7;
        bool tmp_condition_result_33;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        nuitka_bool tmp_condition_result_34;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_7;
        tmp_key_value_19 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_value_20 = mod_consts[69];
        tmp_metaclass_value_7 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_metaclass_value_7 == NULL) {
            tmp_metaclass_value_7 = Py_None;
        }
        assert(!(tmp_metaclass_value_7 == NULL));
        Py_INCREF(tmp_metaclass_value_7);
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        tmp_condition_result_34 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_41 = tmp_class_creation_7__bases;
        tmp_subscript_value_5 = mod_consts[63];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_41, tmp_subscript_value_5, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        tmp_key_value_21 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 80;

        goto try_except_handler_20;
    }
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_42 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_42, mod_consts[71]);
        tmp_condition_result_36 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_value_14;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_kwargs_value_14;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_43 = tmp_class_creation_7__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[71]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        tmp_tuple_element_23 = mod_consts[17];
        tmp_args_value_14 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_23 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 80;
        tmp_assign_source_57 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_14, tmp_kwargs_value_14);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_14);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_37;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_44 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_44, mod_consts[73]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        tmp_condition_result_37 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[75];
        tmp_getattr_default_7 = mod_consts[76];
        tmp_tuple_element_24 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_12 = tmp_class_creation_7__prepared;
            tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_45 == NULL));
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[75]);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 80;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_25:;
    goto branch_end_24;
    branch_no_24:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_58;
    }
    branch_end_24:;
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_Xlib$ext$shape$$$class__7_Mask_80 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[17];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_22;
        }
        if (isFrameUnusable(cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8)) {
            Py_XDECREF(cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8 = MAKE_FUNCTION_FRAME(codeobj_b12ba2d14e0f93f979709de5172e7ea1, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_type_description == NULL);
        frame_b12ba2d14e0f93f979709de5172e7ea1_8 = cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b12ba2d14e0f93f979709de5172e7ea1_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b12ba2d14e0f93f979709de5172e7ea1_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_called_instance_33;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_called_instance_35;
            tmp_expression_value_46 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[93]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_28 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_called_instance_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_28 == NULL)) {
                        tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 83;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_28);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 83;
            tmp_args_element_value_32 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_28,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_28);
            if (tmp_args_element_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_29 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_called_instance_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_29 == NULL)) {
                        tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);

                        exception_lineno = 84;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_29);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 84;
            tmp_args_element_value_33 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_29,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[133], 0)
            );

            Py_DECREF(tmp_called_instance_29);
            if (tmp_args_element_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_30 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_called_instance_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_30 == NULL)) {
                        tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_33);

                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_30);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 85;
            tmp_args_element_value_34 = CALL_METHOD_NO_ARGS(tmp_called_instance_30, mod_consts[115]);
            Py_DECREF(tmp_called_instance_30);
            if (tmp_args_element_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);

                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_23 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[68]);

            if (tmp_called_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_called_value_23 == NULL)) {
                        tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_called_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_33);
                        Py_DECREF(tmp_args_element_value_34);

                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_23);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 86;
            tmp_args_element_value_35 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[124]);

            Py_DECREF(tmp_called_value_23);
            if (tmp_args_element_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);

                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_24 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[0]);

            if (tmp_called_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_33);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);

                        exception_lineno = 87;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_24);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 87;
            tmp_args_element_value_36 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[125]);

            Py_DECREF(tmp_called_value_24);
            if (tmp_args_element_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);

                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_31 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_called_instance_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_31 == NULL)) {
                        tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_33);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);
                        Py_DECREF(tmp_args_element_value_36);

                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_31);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 88;
            tmp_args_element_value_37 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_31,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[133], 0)
            );

            Py_DECREF(tmp_called_instance_31);
            if (tmp_args_element_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_32 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_called_instance_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_32 == NULL)) {
                        tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_33);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);
                        Py_DECREF(tmp_args_element_value_36);
                        Py_DECREF(tmp_args_element_value_37);

                        exception_lineno = 89;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_32);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 89;
            tmp_args_element_value_38 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_32,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[127], 0)
            );

            Py_DECREF(tmp_called_instance_32);
            if (tmp_args_element_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_37);

                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_33 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_called_instance_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_33 == NULL)) {
                        tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_33);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);
                        Py_DECREF(tmp_args_element_value_36);
                        Py_DECREF(tmp_args_element_value_37);
                        Py_DECREF(tmp_args_element_value_38);

                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_33);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 90;
            tmp_args_element_value_39 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_33,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[128], 0)
            );

            Py_DECREF(tmp_called_instance_33);
            if (tmp_args_element_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_34 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_called_instance_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_34 == NULL)) {
                        tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_33);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);
                        Py_DECREF(tmp_args_element_value_36);
                        Py_DECREF(tmp_args_element_value_37);
                        Py_DECREF(tmp_args_element_value_38);
                        Py_DECREF(tmp_args_element_value_39);

                        exception_lineno = 91;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_34);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 91;
            tmp_args_element_value_40 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_34,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[129], 0)
            );

            Py_DECREF(tmp_called_instance_34);
            if (tmp_args_element_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_39);

                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_35 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[64]);

            if (tmp_called_instance_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_35 == NULL)) {
                        tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_33);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);
                        Py_DECREF(tmp_args_element_value_36);
                        Py_DECREF(tmp_args_element_value_37);
                        Py_DECREF(tmp_args_element_value_38);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);

                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_35);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 92;
            tmp_args_element_value_41 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_35,
                mod_consts[134],
                PyTuple_GET_ITEM(mod_consts[135], 0)
            );

            Py_DECREF(tmp_called_instance_35);
            if (tmp_args_element_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame.f_lineno = 82;
            {
                PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS10(tmp_called_value_22, call_args);
            }

            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b12ba2d14e0f93f979709de5172e7ea1_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b12ba2d14e0f93f979709de5172e7ea1_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b12ba2d14e0f93f979709de5172e7ea1_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b12ba2d14e0f93f979709de5172e7ea1_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b12ba2d14e0f93f979709de5172e7ea1_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b12ba2d14e0f93f979709de5172e7ea1_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_b12ba2d14e0f93f979709de5172e7ea1_8 == cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8);
            cache_frame_b12ba2d14e0f93f979709de5172e7ea1_8 = NULL;
        }

        assertFrameObject(frame_b12ba2d14e0f93f979709de5172e7ea1_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_22;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_26;
            } else {
                goto branch_no_26;
            }
        }
        branch_yes_26:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__7_Mask_80, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_22;
        }
        branch_no_26:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_15;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_25 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_25 = mod_consts[17];
            tmp_args_value_15 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_25 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_Xlib$ext$shape$$$class__7_Mask_80;
            PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_15 = tmp_class_creation_7__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 80;
            tmp_assign_source_60 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_59 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__7_Mask_80);
        locals_Xlib$ext$shape$$$class__7_Mask_80 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__7_Mask_80);
        locals_Xlib$ext$shape$$$class__7_Mask_80 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 80;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_59);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_47;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[123]);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        tmp_assign_source_61 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_61, 0, tmp_tuple_element_26);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_62 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = PyDict_New();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_8;
        bool tmp_condition_result_39;
        PyObject *tmp_key_value_22;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_dict_arg_value_23;
        PyObject *tmp_key_value_23;
        nuitka_bool tmp_condition_result_40;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_8;
        tmp_key_value_22 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_22, tmp_key_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_value_23 = mod_consts[69];
        tmp_metaclass_value_8 = DICT_GET_ITEM0(tmp_dict_arg_value_23, tmp_key_value_23);
        if (tmp_metaclass_value_8 == NULL) {
            tmp_metaclass_value_8 = Py_None;
        }
        assert(!(tmp_metaclass_value_8 == NULL));
        Py_INCREF(tmp_metaclass_value_8);
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        tmp_condition_result_40 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_48 = tmp_class_creation_8__bases;
        tmp_subscript_value_6 = mod_consts[63];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_48, tmp_subscript_value_6, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_key_value_24;
        PyObject *tmp_dict_arg_value_24;
        tmp_key_value_24 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_24, tmp_key_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 95;

        goto try_except_handler_23;
    }
    branch_no_27:;
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_49 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_49, mod_consts[71]);
        tmp_condition_result_42 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_value_16;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_kwargs_value_16;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_50 = tmp_class_creation_8__metaclass;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[71]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        tmp_tuple_element_27 = mod_consts[8];
        tmp_args_value_16 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_27);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_27 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_27);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 95;
        tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_16, tmp_kwargs_value_16);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_16);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_51 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_51, mod_consts[73]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[75];
        tmp_getattr_default_8 = mod_consts[76];
        tmp_tuple_element_28 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        tmp_mod_expr_right_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_14 = tmp_class_creation_8__prepared;
            tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_52 == NULL));
            tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[75]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 95;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_66;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_Xlib$ext$shape$$$class__8_Combine_95 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[8];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_25;
        }
        if (isFrameUnusable(cache_frame_0c71c70bd1417ca0295128c05af2363c_9)) {
            Py_XDECREF(cache_frame_0c71c70bd1417ca0295128c05af2363c_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0c71c70bd1417ca0295128c05af2363c_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0c71c70bd1417ca0295128c05af2363c_9 = MAKE_FUNCTION_FRAME(codeobj_0c71c70bd1417ca0295128c05af2363c, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0c71c70bd1417ca0295128c05af2363c_9->m_type_description == NULL);
        frame_0c71c70bd1417ca0295128c05af2363c_9 = cache_frame_0c71c70bd1417ca0295128c05af2363c_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0c71c70bd1417ca0295128c05af2363c_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0c71c70bd1417ca0295128c05af2363c_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_called_instance_38;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_called_instance_43;
            tmp_expression_value_53 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[93]);
            Py_DECREF(tmp_expression_value_53);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_36 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_called_instance_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_36 == NULL)) {
                        tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 98;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_36);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 98;
            tmp_args_element_value_42 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_36,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_36);
            if (tmp_args_element_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_37 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_called_instance_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_37 == NULL)) {
                        tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);

                        exception_lineno = 99;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_37);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 99;
            tmp_args_element_value_43 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_37,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[136], 0)
            );

            Py_DECREF(tmp_called_instance_37);
            if (tmp_args_element_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_38 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_called_instance_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_38 == NULL)) {
                        tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);

                        exception_lineno = 100;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_38);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 100;
            tmp_args_element_value_44 = CALL_METHOD_NO_ARGS(tmp_called_instance_38, mod_consts[115]);
            Py_DECREF(tmp_called_instance_38);
            if (tmp_args_element_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);

                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_value_28 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[68]);

            if (tmp_called_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_called_value_28 == NULL)) {
                        tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_called_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);

                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_28);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 101;
            tmp_args_element_value_45 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[124]);

            Py_DECREF(tmp_called_value_28);
            if (tmp_args_element_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);

                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_value_29 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[0]);

            if (tmp_called_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_called_value_29 == NULL)) {
                        tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_called_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);

                        exception_lineno = 102;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_29);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 102;
            tmp_args_element_value_46 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[125]);

            Py_DECREF(tmp_called_value_29);
            if (tmp_args_element_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);

                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_value_30 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[0]);

            if (tmp_called_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_called_value_30 == NULL)) {
                        tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_called_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);
                        Py_DECREF(tmp_args_element_value_46);

                        exception_lineno = 103;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_30);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 103;
            tmp_args_element_value_47 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_30, mod_consts[137]);

            Py_DECREF(tmp_called_value_30);
            if (tmp_args_element_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_46);

                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_39 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_called_instance_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_39 == NULL)) {
                        tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);
                        Py_DECREF(tmp_args_element_value_46);
                        Py_DECREF(tmp_args_element_value_47);

                        exception_lineno = 104;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_39);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 104;
            tmp_args_element_value_48 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_39,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[118], 0)
            );

            Py_DECREF(tmp_called_instance_39);
            if (tmp_args_element_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_40 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_called_instance_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_40 == NULL)) {
                        tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);
                        Py_DECREF(tmp_args_element_value_46);
                        Py_DECREF(tmp_args_element_value_47);
                        Py_DECREF(tmp_args_element_value_48);

                        exception_lineno = 105;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_40);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 105;
            tmp_args_element_value_49 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_40,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[127], 0)
            );

            Py_DECREF(tmp_called_instance_40);
            if (tmp_args_element_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);

                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_41 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_called_instance_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_41 == NULL)) {
                        tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);
                        Py_DECREF(tmp_args_element_value_46);
                        Py_DECREF(tmp_args_element_value_47);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);

                        exception_lineno = 106;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_41);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 106;
            tmp_args_element_value_50 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_41,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[128], 0)
            );

            Py_DECREF(tmp_called_instance_41);
            if (tmp_args_element_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_42 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_called_instance_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_42 == NULL)) {
                        tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);
                        Py_DECREF(tmp_args_element_value_46);
                        Py_DECREF(tmp_args_element_value_47);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);

                        exception_lineno = 107;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_42);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 107;
            tmp_args_element_value_51 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_42,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[129], 0)
            );

            Py_DECREF(tmp_called_instance_42);
            if (tmp_args_element_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);

                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_43 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[64]);

            if (tmp_called_instance_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_43 == NULL)) {
                        tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);
                        Py_DECREF(tmp_args_element_value_46);
                        Py_DECREF(tmp_args_element_value_47);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);

                        exception_lineno = 108;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_43);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 108;
            tmp_args_element_value_52 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_43,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[138], 0)
            );

            Py_DECREF(tmp_called_instance_43);
            if (tmp_args_element_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);

                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame.f_lineno = 97;
            {
                PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS11(tmp_called_value_27, call_args);
            }

            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);
            Py_DECREF(tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c71c70bd1417ca0295128c05af2363c_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c71c70bd1417ca0295128c05af2363c_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0c71c70bd1417ca0295128c05af2363c_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0c71c70bd1417ca0295128c05af2363c_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0c71c70bd1417ca0295128c05af2363c_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0c71c70bd1417ca0295128c05af2363c_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_0c71c70bd1417ca0295128c05af2363c_9 == cache_frame_0c71c70bd1417ca0295128c05af2363c_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0c71c70bd1417ca0295128c05af2363c_9);
            cache_frame_0c71c70bd1417ca0295128c05af2363c_9 = NULL;
        }

        assertFrameObject(frame_0c71c70bd1417ca0295128c05af2363c_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_25;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_25;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__8_Combine_95, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_25;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_17;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_31 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_29 = mod_consts[8];
            tmp_args_value_17 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_29 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = locals_Xlib$ext$shape$$$class__8_Combine_95;
            PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_17 = tmp_class_creation_8__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 95;
            tmp_assign_source_68 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_67 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__8_Combine_95);
        locals_Xlib$ext$shape$$$class__8_Combine_95 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__8_Combine_95);
        locals_Xlib$ext$shape$$$class__8_Combine_95 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 95;
        goto try_except_handler_23;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_67);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_54;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[123]);
        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        tmp_assign_source_69 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_69, 0, tmp_tuple_element_30);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_70 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = PyDict_New();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_value_9;
        bool tmp_condition_result_45;
        PyObject *tmp_key_value_25;
        PyObject *tmp_dict_arg_value_25;
        PyObject *tmp_dict_arg_value_26;
        PyObject *tmp_key_value_26;
        nuitka_bool tmp_condition_result_46;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_9;
        tmp_key_value_25 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_25, tmp_key_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_value_26 = mod_consts[69];
        tmp_metaclass_value_9 = DICT_GET_ITEM0(tmp_dict_arg_value_26, tmp_key_value_26);
        if (tmp_metaclass_value_9 == NULL) {
            tmp_metaclass_value_9 = Py_None;
        }
        assert(!(tmp_metaclass_value_9 == NULL));
        Py_INCREF(tmp_metaclass_value_9);
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        tmp_condition_result_46 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_55 = tmp_class_creation_9__bases;
        tmp_subscript_value_7 = mod_consts[63];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_55, tmp_subscript_value_7, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_72 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_key_value_27;
        PyObject *tmp_dict_arg_value_27;
        tmp_key_value_27 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_27, tmp_key_value_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 111;

        goto try_except_handler_26;
    }
    branch_no_31:;
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_56 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_56, mod_consts[71]);
        tmp_condition_result_48 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_value_18;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_kwargs_value_18;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_57 = tmp_class_creation_9__metaclass;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[71]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        tmp_tuple_element_31 = mod_consts[19];
        tmp_args_value_18 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_31 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 111;
        tmp_assign_source_73 = CALL_FUNCTION(tmp_called_value_32, tmp_args_value_18, tmp_kwargs_value_18);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_value_18);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_49;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_58 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_58, mod_consts[73]);
        tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        tmp_condition_result_49 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[75];
        tmp_getattr_default_9 = mod_consts[76];
        tmp_tuple_element_32 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        tmp_mod_expr_right_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_59;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_16 = tmp_class_creation_9__prepared;
            tmp_expression_value_59 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_59 == NULL));
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[75]);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 111;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_33:;
    goto branch_end_32;
    branch_no_32:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_74;
    }
    branch_end_32:;
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_Xlib$ext$shape$$$class__9_Offset_111 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[19];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_28;
        }
        if (isFrameUnusable(cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10)) {
            Py_XDECREF(cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10 = MAKE_FUNCTION_FRAME(codeobj_3b0529aadcd768b9f874fd71930b6f6e, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_type_description == NULL);
        frame_3b0529aadcd768b9f874fd71930b6f6e_10 = cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3b0529aadcd768b9f874fd71930b6f6e_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3b0529aadcd768b9f874fd71930b6f6e_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_called_instance_46;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_called_instance_47;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_called_instance_48;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_called_instance_49;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_called_instance_50;
            tmp_expression_value_60 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[64]);

            if (tmp_expression_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 113;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_60);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[93]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_44 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[64]);

            if (tmp_called_instance_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_44 == NULL)) {
                        tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);

                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_44);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 114;
            tmp_args_element_value_53 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_44,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_44);
            if (tmp_args_element_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);

                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_45 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[64]);

            if (tmp_called_instance_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_45 == NULL)) {
                        tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);
                        Py_DECREF(tmp_args_element_value_53);

                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_45);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 115;
            tmp_args_element_value_54 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_45,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[139], 0)
            );

            Py_DECREF(tmp_called_instance_45);
            if (tmp_args_element_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_46 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[64]);

            if (tmp_called_instance_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_46 == NULL)) {
                        tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);

                        exception_lineno = 116;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_46);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 116;
            tmp_args_element_value_55 = CALL_METHOD_NO_ARGS(tmp_called_instance_46, mod_consts[115]);
            Py_DECREF(tmp_called_instance_46);
            if (tmp_args_element_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);

                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_value_34 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[0]);

            if (tmp_called_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_called_value_34 == NULL)) {
                        tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_called_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);

                        exception_lineno = 117;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_value_34);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 117;
            tmp_args_element_value_56 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[125]);

            Py_DECREF(tmp_called_value_34);
            if (tmp_args_element_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);

                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_47 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[64]);

            if (tmp_called_instance_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_47 == NULL)) {
                        tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);
                        Py_DECREF(tmp_args_element_value_56);

                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_47);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 118;
            tmp_args_element_value_57 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_47,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[136], 0)
            );

            Py_DECREF(tmp_called_instance_47);
            if (tmp_args_element_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_56);

                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_48 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[64]);

            if (tmp_called_instance_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_48 == NULL)) {
                        tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);
                        Py_DECREF(tmp_args_element_value_56);
                        Py_DECREF(tmp_args_element_value_57);

                        exception_lineno = 119;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_48);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 119;
            tmp_args_element_value_58 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_48,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[127], 0)
            );

            Py_DECREF(tmp_called_instance_48);
            if (tmp_args_element_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_56);
                Py_DECREF(tmp_args_element_value_57);

                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_49 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[64]);

            if (tmp_called_instance_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_49 == NULL)) {
                        tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);
                        Py_DECREF(tmp_args_element_value_56);
                        Py_DECREF(tmp_args_element_value_57);
                        Py_DECREF(tmp_args_element_value_58);

                        exception_lineno = 120;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_49);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 120;
            tmp_args_element_value_59 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_49,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[128], 0)
            );

            Py_DECREF(tmp_called_instance_49);
            if (tmp_args_element_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_56);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);

                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_50 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[64]);

            if (tmp_called_instance_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_50 == NULL)) {
                        tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);
                        Py_DECREF(tmp_args_element_value_56);
                        Py_DECREF(tmp_args_element_value_57);
                        Py_DECREF(tmp_args_element_value_58);
                        Py_DECREF(tmp_args_element_value_59);

                        exception_lineno = 121;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_50);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 121;
            tmp_args_element_value_60 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_50,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[129], 0)
            );

            Py_DECREF(tmp_called_instance_50);
            if (tmp_args_element_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_56);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_59);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame.f_lineno = 113;
            {
                PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_33, call_args);
            }

            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3b0529aadcd768b9f874fd71930b6f6e_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3b0529aadcd768b9f874fd71930b6f6e_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3b0529aadcd768b9f874fd71930b6f6e_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3b0529aadcd768b9f874fd71930b6f6e_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3b0529aadcd768b9f874fd71930b6f6e_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3b0529aadcd768b9f874fd71930b6f6e_10,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3b0529aadcd768b9f874fd71930b6f6e_10 == cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10);
            cache_frame_3b0529aadcd768b9f874fd71930b6f6e_10 = NULL;
        }

        assertFrameObject(frame_3b0529aadcd768b9f874fd71930b6f6e_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_28;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_50;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_50 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_50 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_28;
            }
            if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
                goto branch_yes_34;
            } else {
                goto branch_no_34;
            }
        }
        branch_yes_34:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__9_Offset_111, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_28;
        }
        branch_no_34:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_19;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_35 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_33 = mod_consts[19];
            tmp_args_value_19 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_33 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = locals_Xlib$ext$shape$$$class__9_Offset_111;
            PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_19 = tmp_class_creation_9__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 111;
            tmp_assign_source_76 = CALL_FUNCTION(tmp_called_value_35, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_75 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__9_Offset_111);
        locals_Xlib$ext$shape$$$class__9_Offset_111 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__9_Offset_111);
        locals_Xlib$ext$shape$$$class__9_Offset_111 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 111;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_75);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_value_61;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[111]);
        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        tmp_assign_source_77 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_77, 0, tmp_tuple_element_34);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_78 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = PyDict_New();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_metaclass_value_10;
        bool tmp_condition_result_51;
        PyObject *tmp_key_value_28;
        PyObject *tmp_dict_arg_value_28;
        PyObject *tmp_dict_arg_value_29;
        PyObject *tmp_key_value_29;
        nuitka_bool tmp_condition_result_52;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_10;
        tmp_key_value_28 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_28, tmp_key_value_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_value_29 = mod_consts[69];
        tmp_metaclass_value_10 = DICT_GET_ITEM0(tmp_dict_arg_value_29, tmp_key_value_29);
        if (tmp_metaclass_value_10 == NULL) {
            tmp_metaclass_value_10 = Py_None;
        }
        assert(!(tmp_metaclass_value_10 == NULL));
        Py_INCREF(tmp_metaclass_value_10);
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        tmp_condition_result_52 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_62 = tmp_class_creation_10__bases;
        tmp_subscript_value_8 = mod_consts[63];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_62, tmp_subscript_value_8, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_80 = SELECT_METACLASS(tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_53;
        PyObject *tmp_key_value_30;
        PyObject *tmp_dict_arg_value_30;
        tmp_key_value_30 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_30, tmp_key_value_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_53 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 124;

        goto try_except_handler_29;
    }
    branch_no_35:;
    {
        nuitka_bool tmp_condition_result_54;
        PyObject *tmp_expression_value_63;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_63 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_63, mod_consts[71]);
        tmp_condition_result_54 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_value_20;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_kwargs_value_20;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_64 = tmp_class_creation_10__metaclass;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[71]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        tmp_tuple_element_35 = mod_consts[21];
        tmp_args_value_20 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_35);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_35 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_35);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 124;
        tmp_assign_source_81 = CALL_FUNCTION(tmp_called_value_36, tmp_args_value_20, tmp_kwargs_value_20);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_value_20);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_65;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_65 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_65, mod_consts[73]);
        tmp_operand_value_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[75];
        tmp_getattr_default_10 = mod_consts[76];
        tmp_tuple_element_36 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        tmp_mod_expr_right_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_18 = tmp_class_creation_10__prepared;
            tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_66 == NULL));
            tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[75]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_29;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 124;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_29;
    }
    branch_no_37:;
    goto branch_end_36;
    branch_no_36:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = PyDict_New();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_82;
    }
    branch_end_36:;
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_Xlib$ext$shape$$$class__10_QueryExtents_124 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[21];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_31;
        }
        if (isFrameUnusable(cache_frame_2ef8d45672f80ce4b139df698e94c778_11)) {
            Py_XDECREF(cache_frame_2ef8d45672f80ce4b139df698e94c778_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2ef8d45672f80ce4b139df698e94c778_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2ef8d45672f80ce4b139df698e94c778_11 = MAKE_FUNCTION_FRAME(codeobj_2ef8d45672f80ce4b139df698e94c778, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_2ef8d45672f80ce4b139df698e94c778_11->m_type_description == NULL);
        frame_2ef8d45672f80ce4b139df698e94c778_11 = cache_frame_2ef8d45672f80ce4b139df698e94c778_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2ef8d45672f80ce4b139df698e94c778_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2ef8d45672f80ce4b139df698e94c778_11) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_called_instance_51;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_called_instance_52;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_called_instance_53;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_called_instance_54;
            tmp_expression_value_67 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_expression_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_67 == NULL)) {
                        tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_expression_value_67);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[93]);
            Py_DECREF(tmp_expression_value_67);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_51 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_51 == NULL)) {
                        tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 127;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_51);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 127;
            tmp_args_element_value_61 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_51,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_51);
            if (tmp_args_element_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_52 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_52 == NULL)) {
                        tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);
                        Py_DECREF(tmp_args_element_value_61);

                        exception_lineno = 128;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_52);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 128;
            tmp_args_element_value_62 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_52,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[140], 0)
            );

            Py_DECREF(tmp_called_instance_52);
            if (tmp_args_element_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_61);

                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_53 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_53 == NULL)) {
                        tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);
                        Py_DECREF(tmp_args_element_value_61);
                        Py_DECREF(tmp_args_element_value_62);

                        exception_lineno = 129;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_53);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 129;
            tmp_args_element_value_63 = CALL_METHOD_NO_ARGS(tmp_called_instance_53, mod_consts[115]);
            Py_DECREF(tmp_called_instance_53);
            if (tmp_args_element_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);

                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_54 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_54 == NULL)) {
                        tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);
                        Py_DECREF(tmp_args_element_value_61);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);

                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_54);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 130;
            tmp_args_element_value_64 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_54,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[127], 0)
            );

            Py_DECREF(tmp_called_instance_54);
            if (tmp_args_element_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);

                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 126;
            {
                PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_37, call_args);
            }

            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_called_instance_55;
            PyObject *tmp_args_element_value_66;
            PyObject *tmp_called_instance_56;
            PyObject *tmp_args_element_value_67;
            PyObject *tmp_called_instance_57;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_called_instance_58;
            PyObject *tmp_args_element_value_69;
            PyObject *tmp_called_instance_59;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_called_instance_60;
            PyObject *tmp_args_element_value_71;
            PyObject *tmp_called_instance_61;
            PyObject *tmp_args_element_value_72;
            PyObject *tmp_called_instance_62;
            PyObject *tmp_args_element_value_73;
            PyObject *tmp_called_instance_63;
            PyObject *tmp_args_element_value_74;
            PyObject *tmp_called_instance_64;
            PyObject *tmp_args_element_value_75;
            PyObject *tmp_called_instance_65;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_called_instance_66;
            PyObject *tmp_args_element_value_77;
            PyObject *tmp_called_instance_67;
            PyObject *tmp_args_element_value_78;
            PyObject *tmp_called_instance_68;
            PyObject *tmp_args_element_value_79;
            PyObject *tmp_called_instance_69;
            tmp_expression_value_68 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_expression_value_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_68 == NULL)) {
                        tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_expression_value_68);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[93]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_55 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_55 == NULL)) {
                        tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 134;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_55);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 134;
            tmp_args_element_value_65 = CALL_METHOD_NO_ARGS(tmp_called_instance_55, mod_consts[117]);
            Py_DECREF(tmp_called_instance_55);
            if (tmp_args_element_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_56 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_56 == NULL)) {
                        tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);

                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_56);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 135;
            tmp_args_element_value_66 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_56,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[118], 0)
            );

            Py_DECREF(tmp_called_instance_56);
            if (tmp_args_element_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_57 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_57 == NULL)) {
                        tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);

                        exception_lineno = 136;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_57);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 136;
            tmp_args_element_value_67 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_57,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[97], 0)
            );

            Py_DECREF(tmp_called_instance_57);
            if (tmp_args_element_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_58 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_58 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_58 == NULL)) {
                        tmp_called_instance_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);

                        exception_lineno = 137;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_58);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 137;
            tmp_args_element_value_68 = CALL_METHOD_NO_ARGS(tmp_called_instance_58, mod_consts[119]);
            Py_DECREF(tmp_called_instance_58);
            if (tmp_args_element_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);

                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_59 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_59 == NULL)) {
                        tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);

                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_59);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 138;
            tmp_args_element_value_69 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_59,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[141], 0)
            );

            Py_DECREF(tmp_called_instance_59);
            if (tmp_args_element_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_60 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_60 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_60 == NULL)) {
                        tmp_called_instance_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);

                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_60);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 139;
            tmp_args_element_value_70 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_60,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[142], 0)
            );

            Py_DECREF(tmp_called_instance_60);
            if (tmp_args_element_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_61 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_61 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_61 == NULL)) {
                        tmp_called_instance_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);

                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_61);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 140;
            tmp_args_element_value_71 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_61,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[133], 0)
            );

            Py_DECREF(tmp_called_instance_61);
            if (tmp_args_element_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_62 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_62 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_62 == NULL)) {
                        tmp_called_instance_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);

                        exception_lineno = 141;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_62);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 141;
            tmp_args_element_value_72 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_62,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[143], 0)
            );

            Py_DECREF(tmp_called_instance_62);
            if (tmp_args_element_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);

                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_63 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_63 == NULL)) {
                        tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);
                        Py_DECREF(tmp_args_element_value_72);

                        exception_lineno = 142;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_63);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 142;
            tmp_args_element_value_73 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_63,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[144], 0)
            );

            Py_DECREF(tmp_called_instance_63);
            if (tmp_args_element_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_64 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_64 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_64 == NULL)) {
                        tmp_called_instance_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);
                        Py_DECREF(tmp_args_element_value_72);
                        Py_DECREF(tmp_args_element_value_73);

                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_64);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 143;
            tmp_args_element_value_74 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_64,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[145], 0)
            );

            Py_DECREF(tmp_called_instance_64);
            if (tmp_args_element_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);

                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_65 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_65 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_65 == NULL)) {
                        tmp_called_instance_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);
                        Py_DECREF(tmp_args_element_value_72);
                        Py_DECREF(tmp_args_element_value_73);
                        Py_DECREF(tmp_args_element_value_74);

                        exception_lineno = 144;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_65);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 144;
            tmp_args_element_value_75 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_65,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[146], 0)
            );

            Py_DECREF(tmp_called_instance_65);
            if (tmp_args_element_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_66 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_66 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_66 == NULL)) {
                        tmp_called_instance_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);
                        Py_DECREF(tmp_args_element_value_72);
                        Py_DECREF(tmp_args_element_value_73);
                        Py_DECREF(tmp_args_element_value_74);
                        Py_DECREF(tmp_args_element_value_75);

                        exception_lineno = 145;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_66);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 145;
            tmp_args_element_value_76 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_66,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[147], 0)
            );

            Py_DECREF(tmp_called_instance_66);
            if (tmp_args_element_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_75);

                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_67 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_67 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_67 == NULL)) {
                        tmp_called_instance_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);
                        Py_DECREF(tmp_args_element_value_72);
                        Py_DECREF(tmp_args_element_value_73);
                        Py_DECREF(tmp_args_element_value_74);
                        Py_DECREF(tmp_args_element_value_75);
                        Py_DECREF(tmp_args_element_value_76);

                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_67);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 146;
            tmp_args_element_value_77 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_67,
                mod_consts[100],
                PyTuple_GET_ITEM(mod_consts[148], 0)
            );

            Py_DECREF(tmp_called_instance_67);
            if (tmp_args_element_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);

                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_68 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_68 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_68 == NULL)) {
                        tmp_called_instance_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);
                        Py_DECREF(tmp_args_element_value_72);
                        Py_DECREF(tmp_args_element_value_73);
                        Py_DECREF(tmp_args_element_value_74);
                        Py_DECREF(tmp_args_element_value_75);
                        Py_DECREF(tmp_args_element_value_76);
                        Py_DECREF(tmp_args_element_value_77);

                        exception_lineno = 147;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_68);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 147;
            tmp_args_element_value_78 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_68,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[149], 0)
            );

            Py_DECREF(tmp_called_instance_68);
            if (tmp_args_element_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);

                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_called_instance_69 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[64]);

            if (tmp_called_instance_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_69 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_69 == NULL)) {
                        tmp_called_instance_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);
                        Py_DECREF(tmp_args_element_value_72);
                        Py_DECREF(tmp_args_element_value_73);
                        Py_DECREF(tmp_args_element_value_74);
                        Py_DECREF(tmp_args_element_value_75);
                        Py_DECREF(tmp_args_element_value_76);
                        Py_DECREF(tmp_args_element_value_77);
                        Py_DECREF(tmp_args_element_value_78);

                        exception_lineno = 148;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_69);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 148;
            tmp_args_element_value_79 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_69,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[150], 0)
            );

            Py_DECREF(tmp_called_instance_69);
            if (tmp_args_element_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_78);

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame.f_lineno = 133;
            {
                PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS15(tmp_called_value_38, call_args);
            }

            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_65);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_args_element_value_71);
            Py_DECREF(tmp_args_element_value_72);
            Py_DECREF(tmp_args_element_value_73);
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_args_element_value_75);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);
            Py_DECREF(tmp_args_element_value_79);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2ef8d45672f80ce4b139df698e94c778_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2ef8d45672f80ce4b139df698e94c778_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2ef8d45672f80ce4b139df698e94c778_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2ef8d45672f80ce4b139df698e94c778_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2ef8d45672f80ce4b139df698e94c778_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2ef8d45672f80ce4b139df698e94c778_11,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_2ef8d45672f80ce4b139df698e94c778_11 == cache_frame_2ef8d45672f80ce4b139df698e94c778_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_2ef8d45672f80ce4b139df698e94c778_11);
            cache_frame_2ef8d45672f80ce4b139df698e94c778_11 = NULL;
        }

        assertFrameObject(frame_2ef8d45672f80ce4b139df698e94c778_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_31;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_56;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto try_except_handler_31;
            }
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto branch_yes_38;
            } else {
                goto branch_no_38;
            }
        }
        branch_yes_38:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__10_QueryExtents_124, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_31;
        }
        branch_no_38:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kwargs_value_21;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_39 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_37 = mod_consts[21];
            tmp_args_value_21 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_37 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_37);
            tmp_tuple_element_37 = locals_Xlib$ext$shape$$$class__10_QueryExtents_124;
            PyTuple_SET_ITEM0(tmp_args_value_21, 2, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_21 = tmp_class_creation_10__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 124;
            tmp_assign_source_84 = CALL_FUNCTION(tmp_called_value_39, tmp_args_value_21, tmp_kwargs_value_21);
            Py_DECREF(tmp_args_value_21);
            if (tmp_assign_source_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_83 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__10_QueryExtents_124);
        locals_Xlib$ext$shape$$$class__10_QueryExtents_124 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__10_QueryExtents_124);
        locals_Xlib$ext$shape$$$class__10_QueryExtents_124 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 124;
        goto try_except_handler_29;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_83);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_value_69;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[123]);
        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        tmp_assign_source_85 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_85, 0, tmp_tuple_element_38);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_86 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = PyDict_New();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_metaclass_value_11;
        bool tmp_condition_result_57;
        PyObject *tmp_key_value_31;
        PyObject *tmp_dict_arg_value_31;
        PyObject *tmp_dict_arg_value_32;
        PyObject *tmp_key_value_32;
        nuitka_bool tmp_condition_result_58;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_11;
        tmp_key_value_31 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_31, tmp_key_value_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_value_32 = mod_consts[69];
        tmp_metaclass_value_11 = DICT_GET_ITEM0(tmp_dict_arg_value_32, tmp_key_value_32);
        if (tmp_metaclass_value_11 == NULL) {
            tmp_metaclass_value_11 = Py_None;
        }
        assert(!(tmp_metaclass_value_11 == NULL));
        Py_INCREF(tmp_metaclass_value_11);
        goto condexpr_end_19;
        condexpr_false_19:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        tmp_condition_result_58 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_70 = tmp_class_creation_11__bases;
        tmp_subscript_value_9 = mod_consts[63];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_70, tmp_subscript_value_9, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_20:;
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_88 = SELECT_METACLASS(tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_88;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_key_value_33;
        PyObject *tmp_dict_arg_value_33;
        tmp_key_value_33 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_33, tmp_key_value_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_59 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 151;

        goto try_except_handler_32;
    }
    branch_no_39:;
    {
        nuitka_bool tmp_condition_result_60;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_71 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_71, mod_consts[71]);
        tmp_condition_result_60 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_value_22;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_kwargs_value_22;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_72 = tmp_class_creation_11__metaclass;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[71]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        tmp_tuple_element_39 = mod_consts[26];
        tmp_args_value_22 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_39);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_39 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_39);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 151;
        tmp_assign_source_89 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_22, tmp_kwargs_value_22);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_value_22);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_89;
    }
    {
        bool tmp_condition_result_61;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_73;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_73 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_73, mod_consts[73]);
        tmp_operand_value_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        tmp_condition_result_61 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_11 = mod_consts[75];
        tmp_getattr_default_11 = mod_consts[76];
        tmp_tuple_element_40 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        tmp_mod_expr_right_11 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_74;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_20 = tmp_class_creation_11__prepared;
            tmp_expression_value_74 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_74 == NULL));
            tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[75]);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_40);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_32;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 151;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_32;
    }
    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = PyDict_New();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_90;
    }
    branch_end_40:;
    {
        PyObject *tmp_assign_source_91;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_Xlib$ext$shape$$$class__11_SelectInput_151 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[26];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_34;
        }
        if (isFrameUnusable(cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12)) {
            Py_XDECREF(cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12);

#if _DEBUG_REFCOUNTS
            if (cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12 = MAKE_FUNCTION_FRAME(codeobj_cb565ab40cecdd3d9113f9ed51d9b842, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_type_description == NULL);
        frame_cb565ab40cecdd3d9113f9ed51d9b842_12 = cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_cb565ab40cecdd3d9113f9ed51d9b842_12);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_cb565ab40cecdd3d9113f9ed51d9b842_12) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_args_element_value_80;
            PyObject *tmp_called_instance_70;
            PyObject *tmp_args_element_value_81;
            PyObject *tmp_called_instance_71;
            PyObject *tmp_args_element_value_82;
            PyObject *tmp_called_instance_72;
            PyObject *tmp_args_element_value_83;
            PyObject *tmp_called_instance_73;
            PyObject *tmp_args_element_value_84;
            PyObject *tmp_called_instance_74;
            PyObject *tmp_args_element_value_85;
            PyObject *tmp_called_instance_75;
            tmp_expression_value_75 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[64]);

            if (tmp_expression_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 153;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_expression_value_75);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[93]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_called_instance_70 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[64]);

            if (tmp_called_instance_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_70 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_70 == NULL)) {
                        tmp_called_instance_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);

                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_70);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_frame.f_lineno = 154;
            tmp_args_element_value_80 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_70,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_70);
            if (tmp_args_element_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);

                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_called_instance_71 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[64]);

            if (tmp_called_instance_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_71 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_71 == NULL)) {
                        tmp_called_instance_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_80);

                        exception_lineno = 155;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_71);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_frame.f_lineno = 155;
            tmp_args_element_value_81 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_71,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[151], 0)
            );

            Py_DECREF(tmp_called_instance_71);
            if (tmp_args_element_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_80);

                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_called_instance_72 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[64]);

            if (tmp_called_instance_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_72 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_72 == NULL)) {
                        tmp_called_instance_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_80);
                        Py_DECREF(tmp_args_element_value_81);

                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_72);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_frame.f_lineno = 156;
            tmp_args_element_value_82 = CALL_METHOD_NO_ARGS(tmp_called_instance_72, mod_consts[115]);
            Py_DECREF(tmp_called_instance_72);
            if (tmp_args_element_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_81);

                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_called_instance_73 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[64]);

            if (tmp_called_instance_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_73 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_73 == NULL)) {
                        tmp_called_instance_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_80);
                        Py_DECREF(tmp_args_element_value_81);
                        Py_DECREF(tmp_args_element_value_82);

                        exception_lineno = 157;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_73);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_frame.f_lineno = 157;
            tmp_args_element_value_83 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_73,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[127], 0)
            );

            Py_DECREF(tmp_called_instance_73);
            if (tmp_args_element_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_81);
                Py_DECREF(tmp_args_element_value_82);

                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_called_instance_74 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[64]);

            if (tmp_called_instance_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_74 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_74 == NULL)) {
                        tmp_called_instance_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_80);
                        Py_DECREF(tmp_args_element_value_81);
                        Py_DECREF(tmp_args_element_value_82);
                        Py_DECREF(tmp_args_element_value_83);

                        exception_lineno = 158;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_74);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_frame.f_lineno = 158;
            tmp_args_element_value_84 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_74,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[152], 0)
            );

            Py_DECREF(tmp_called_instance_74);
            if (tmp_args_element_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_81);
                Py_DECREF(tmp_args_element_value_82);
                Py_DECREF(tmp_args_element_value_83);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_called_instance_75 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[64]);

            if (tmp_called_instance_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_75 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_75 == NULL)) {
                        tmp_called_instance_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_80);
                        Py_DECREF(tmp_args_element_value_81);
                        Py_DECREF(tmp_args_element_value_82);
                        Py_DECREF(tmp_args_element_value_83);
                        Py_DECREF(tmp_args_element_value_84);

                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_75);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_frame.f_lineno = 159;
            tmp_args_element_value_85 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_75,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[136], 0)
            );

            Py_DECREF(tmp_called_instance_75);
            if (tmp_args_element_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_81);
                Py_DECREF(tmp_args_element_value_82);
                Py_DECREF(tmp_args_element_value_83);
                Py_DECREF(tmp_args_element_value_84);

                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_41, call_args);
            }

            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_80);
            Py_DECREF(tmp_args_element_value_81);
            Py_DECREF(tmp_args_element_value_82);
            Py_DECREF(tmp_args_element_value_83);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cb565ab40cecdd3d9113f9ed51d9b842_12);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;

        frame_exception_exit_12:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cb565ab40cecdd3d9113f9ed51d9b842_12);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cb565ab40cecdd3d9113f9ed51d9b842_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cb565ab40cecdd3d9113f9ed51d9b842_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cb565ab40cecdd3d9113f9ed51d9b842_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cb565ab40cecdd3d9113f9ed51d9b842_12,
            type_description_2,
            outline_10_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_cb565ab40cecdd3d9113f9ed51d9b842_12 == cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12);
            cache_frame_cb565ab40cecdd3d9113f9ed51d9b842_12 = NULL;
        }

        assertFrameObject(frame_cb565ab40cecdd3d9113f9ed51d9b842_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;

        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_34;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_62;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_62 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_62 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto try_except_handler_34;
            }
            if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__11_SelectInput_151, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_34;
        }
        branch_no_42:;
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_value_23;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_kwargs_value_23;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_42 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_41 = mod_consts[26];
            tmp_args_value_23 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_41 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = locals_Xlib$ext$shape$$$class__11_SelectInput_151;
            PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_23 = tmp_class_creation_11__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 151;
            tmp_assign_source_92 = CALL_FUNCTION(tmp_called_value_42, tmp_args_value_23, tmp_kwargs_value_23);
            Py_DECREF(tmp_args_value_23);
            if (tmp_assign_source_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto try_except_handler_34;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_92;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_91 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_91);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__11_SelectInput_151);
        locals_Xlib$ext$shape$$$class__11_SelectInput_151 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__11_SelectInput_151);
        locals_Xlib$ext$shape$$$class__11_SelectInput_151 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 151;
        goto try_except_handler_32;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_91);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_value_76;
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[111]);
        if (tmp_tuple_element_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        tmp_assign_source_93 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_93, 0, tmp_tuple_element_42);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_94 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = PyDict_New();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_metaclass_value_12;
        bool tmp_condition_result_63;
        PyObject *tmp_key_value_34;
        PyObject *tmp_dict_arg_value_34;
        PyObject *tmp_dict_arg_value_35;
        PyObject *tmp_key_value_35;
        nuitka_bool tmp_condition_result_64;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_12;
        tmp_key_value_34 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_34, tmp_key_value_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_value_35 = mod_consts[69];
        tmp_metaclass_value_12 = DICT_GET_ITEM0(tmp_dict_arg_value_35, tmp_key_value_35);
        if (tmp_metaclass_value_12 == NULL) {
            tmp_metaclass_value_12 = Py_None;
        }
        assert(!(tmp_metaclass_value_12 == NULL));
        Py_INCREF(tmp_metaclass_value_12);
        goto condexpr_end_21;
        condexpr_false_21:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        tmp_condition_result_64 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_77 = tmp_class_creation_12__bases;
        tmp_subscript_value_10 = mod_consts[63];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_77, tmp_subscript_value_10, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_22:;
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_96 = SELECT_METACLASS(tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_96;
    }
    {
        bool tmp_condition_result_65;
        PyObject *tmp_key_value_36;
        PyObject *tmp_dict_arg_value_36;
        tmp_key_value_36 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_36, tmp_key_value_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_65 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 162;

        goto try_except_handler_35;
    }
    branch_no_43:;
    {
        nuitka_bool tmp_condition_result_66;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_78 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_78, mod_consts[71]);
        tmp_condition_result_66 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_value_24;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_kwargs_value_24;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_79 = tmp_class_creation_12__metaclass;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[71]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        tmp_tuple_element_43 = mod_consts[15];
        tmp_args_value_24 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_43 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 162;
        tmp_assign_source_97 = CALL_FUNCTION(tmp_called_value_43, tmp_args_value_24, tmp_kwargs_value_24);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_value_24);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_80 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_80, mod_consts[73]);
        tmp_operand_value_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        tmp_condition_result_67 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_12 = mod_consts[75];
        tmp_getattr_default_12 = mod_consts[76];
        tmp_tuple_element_44 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        tmp_mod_expr_right_12 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_81;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_22 = tmp_class_creation_12__prepared;
            tmp_expression_value_81 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_81 == NULL));
            tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[75]);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_35;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_35;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 162;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_35;
    }
    branch_no_45:;
    goto branch_end_44;
    branch_no_44:;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = PyDict_New();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_98;
    }
    branch_end_44:;
    {
        PyObject *tmp_assign_source_99;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_Xlib$ext$shape$$$class__12_InputSelected_162 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_37;
        }
        if (isFrameUnusable(cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13)) {
            Py_XDECREF(cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13);

#if _DEBUG_REFCOUNTS
            if (cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13 = MAKE_FUNCTION_FRAME(codeobj_554fe7a3155806abc64b44fd8bba6bfe, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_type_description == NULL);
        frame_554fe7a3155806abc64b44fd8bba6bfe_13 = cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_554fe7a3155806abc64b44fd8bba6bfe_13);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_554fe7a3155806abc64b44fd8bba6bfe_13) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_args_element_value_86;
            PyObject *tmp_called_instance_76;
            PyObject *tmp_args_element_value_87;
            PyObject *tmp_called_instance_77;
            PyObject *tmp_args_element_value_88;
            PyObject *tmp_called_instance_78;
            PyObject *tmp_args_element_value_89;
            PyObject *tmp_called_instance_79;
            tmp_expression_value_82 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_expression_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 164;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_expression_value_82);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[93]);
            Py_DECREF(tmp_expression_value_82);
            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_instance_76 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_called_instance_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_76 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_76 == NULL)) {
                        tmp_called_instance_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_76);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 165;
            tmp_args_element_value_86 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_76,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_76);
            if (tmp_args_element_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);

                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_instance_77 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_called_instance_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_77 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_77 == NULL)) {
                        tmp_called_instance_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);
                        Py_DECREF(tmp_args_element_value_86);

                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_77);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 166;
            tmp_args_element_value_87 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_77,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[153], 0)
            );

            Py_DECREF(tmp_called_instance_77);
            if (tmp_args_element_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);
                Py_DECREF(tmp_args_element_value_86);

                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_instance_78 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_called_instance_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_78 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_78 == NULL)) {
                        tmp_called_instance_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);
                        Py_DECREF(tmp_args_element_value_86);
                        Py_DECREF(tmp_args_element_value_87);

                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_78);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 167;
            tmp_args_element_value_88 = CALL_METHOD_NO_ARGS(tmp_called_instance_78, mod_consts[115]);
            Py_DECREF(tmp_called_instance_78);
            if (tmp_args_element_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);

                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_instance_79 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_called_instance_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_79 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_79 == NULL)) {
                        tmp_called_instance_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);
                        Py_DECREF(tmp_args_element_value_86);
                        Py_DECREF(tmp_args_element_value_87);
                        Py_DECREF(tmp_args_element_value_88);

                        exception_lineno = 168;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_79);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 168;
            tmp_args_element_value_89 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_79,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[127], 0)
            );

            Py_DECREF(tmp_called_instance_79);
            if (tmp_args_element_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_88);

                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 164;
            {
                PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_44, call_args);
            }

            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_args_element_value_90;
            PyObject *tmp_called_instance_80;
            PyObject *tmp_args_element_value_91;
            PyObject *tmp_called_instance_81;
            PyObject *tmp_args_element_value_92;
            PyObject *tmp_called_instance_82;
            PyObject *tmp_args_element_value_93;
            PyObject *tmp_called_instance_83;
            tmp_expression_value_83 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_expression_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_83 == NULL)) {
                        tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 171;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_expression_value_83);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[93]);
            Py_DECREF(tmp_expression_value_83);
            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_instance_80 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_called_instance_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_80 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_80 == NULL)) {
                        tmp_called_instance_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);

                        exception_lineno = 172;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_80);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 172;
            tmp_args_element_value_90 = CALL_METHOD_NO_ARGS(tmp_called_instance_80, mod_consts[117]);
            Py_DECREF(tmp_called_instance_80);
            if (tmp_args_element_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);

                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_instance_81 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_called_instance_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_81 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_81 == NULL)) {
                        tmp_called_instance_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);
                        Py_DECREF(tmp_args_element_value_90);

                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_81);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 173;
            tmp_args_element_value_91 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_81,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[154], 0)
            );

            Py_DECREF(tmp_called_instance_81);
            if (tmp_args_element_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);
                Py_DECREF(tmp_args_element_value_90);

                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_instance_82 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_called_instance_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_82 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_82 == NULL)) {
                        tmp_called_instance_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);
                        Py_DECREF(tmp_args_element_value_90);
                        Py_DECREF(tmp_args_element_value_91);

                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_82);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 174;
            tmp_args_element_value_92 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_82,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[97], 0)
            );

            Py_DECREF(tmp_called_instance_82);
            if (tmp_args_element_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);
                Py_DECREF(tmp_args_element_value_90);
                Py_DECREF(tmp_args_element_value_91);

                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_instance_83 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[64]);

            if (tmp_called_instance_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_83 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_83 == NULL)) {
                        tmp_called_instance_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);
                        Py_DECREF(tmp_args_element_value_90);
                        Py_DECREF(tmp_args_element_value_91);
                        Py_DECREF(tmp_args_element_value_92);

                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_83);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 175;
            tmp_args_element_value_93 = CALL_METHOD_NO_ARGS(tmp_called_instance_83, mod_consts[119]);
            Py_DECREF(tmp_called_instance_83);
            if (tmp_args_element_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);
                Py_DECREF(tmp_args_element_value_90);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);

                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame.f_lineno = 171;
            {
                PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_45, call_args);
            }

            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_90);
            Py_DECREF(tmp_args_element_value_91);
            Py_DECREF(tmp_args_element_value_92);
            Py_DECREF(tmp_args_element_value_93);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_554fe7a3155806abc64b44fd8bba6bfe_13);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;

        frame_exception_exit_13:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_554fe7a3155806abc64b44fd8bba6bfe_13);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_554fe7a3155806abc64b44fd8bba6bfe_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_554fe7a3155806abc64b44fd8bba6bfe_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_554fe7a3155806abc64b44fd8bba6bfe_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_554fe7a3155806abc64b44fd8bba6bfe_13,
            type_description_2,
            outline_11_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_554fe7a3155806abc64b44fd8bba6bfe_13 == cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13);
            cache_frame_554fe7a3155806abc64b44fd8bba6bfe_13 = NULL;
        }

        assertFrameObject(frame_554fe7a3155806abc64b44fd8bba6bfe_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;

        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_37;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_68;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_37;
            }
            if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
                goto branch_yes_46;
            } else {
                goto branch_no_46;
            }
        }
        branch_yes_46:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__12_InputSelected_162, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_37;
        }
        branch_no_46:;
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_25;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_value_25;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_46 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_45 = mod_consts[15];
            tmp_args_value_25 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_45 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = locals_Xlib$ext$shape$$$class__12_InputSelected_162;
            PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_25 = tmp_class_creation_12__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 162;
            tmp_assign_source_100 = CALL_FUNCTION(tmp_called_value_46, tmp_args_value_25, tmp_kwargs_value_25);
            Py_DECREF(tmp_args_value_25);
            if (tmp_assign_source_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_37;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_100;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_99 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_99);
        goto try_return_handler_37;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__12_InputSelected_162);
        locals_Xlib$ext$shape$$$class__12_InputSelected_162 = NULL;
        goto try_return_handler_36;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__12_InputSelected_162);
        locals_Xlib$ext$shape$$$class__12_InputSelected_162 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 162;
        goto try_except_handler_35;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_99);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_expression_value_84;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[111]);
        if (tmp_tuple_element_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        tmp_assign_source_101 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_101, 0, tmp_tuple_element_46);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_102 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_102;
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = PyDict_New();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_metaclass_value_13;
        bool tmp_condition_result_69;
        PyObject *tmp_key_value_37;
        PyObject *tmp_dict_arg_value_37;
        PyObject *tmp_dict_arg_value_38;
        PyObject *tmp_key_value_38;
        nuitka_bool tmp_condition_result_70;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_13;
        tmp_key_value_37 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_37 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_37, tmp_key_value_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_69 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_38 = tmp_class_creation_13__class_decl_dict;
        tmp_key_value_38 = mod_consts[69];
        tmp_metaclass_value_13 = DICT_GET_ITEM0(tmp_dict_arg_value_38, tmp_key_value_38);
        if (tmp_metaclass_value_13 == NULL) {
            tmp_metaclass_value_13 = Py_None;
        }
        assert(!(tmp_metaclass_value_13 == NULL));
        Py_INCREF(tmp_metaclass_value_13);
        goto condexpr_end_23;
        condexpr_false_23:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        tmp_condition_result_70 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_85 = tmp_class_creation_13__bases;
        tmp_subscript_value_11 = mod_consts[63];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_85, tmp_subscript_value_11, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_24:;
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_104 = SELECT_METACLASS(tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_104;
    }
    {
        bool tmp_condition_result_71;
        PyObject *tmp_key_value_39;
        PyObject *tmp_dict_arg_value_39;
        tmp_key_value_39 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_39 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_39, tmp_key_value_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_71 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_71 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 178;

        goto try_except_handler_38;
    }
    branch_no_47:;
    {
        nuitka_bool tmp_condition_result_72;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_86 = tmp_class_creation_13__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_86, mod_consts[71]);
        tmp_condition_result_72 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_value_26;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_kwargs_value_26;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_87 = tmp_class_creation_13__metaclass;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[71]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        tmp_tuple_element_47 = mod_consts[13];
        tmp_args_value_26 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_47);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_47 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_47);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 178;
        tmp_assign_source_105 = CALL_FUNCTION(tmp_called_value_47, tmp_args_value_26, tmp_kwargs_value_26);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_value_26);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_105;
    }
    {
        bool tmp_condition_result_73;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_88 = tmp_class_creation_13__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_88, mod_consts[73]);
        tmp_operand_value_13 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        tmp_condition_result_73 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_73 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_getattr_target_13;
        PyObject *tmp_getattr_attr_13;
        PyObject *tmp_getattr_default_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_getattr_target_13 = tmp_class_creation_13__metaclass;
        tmp_getattr_attr_13 = mod_consts[75];
        tmp_getattr_default_13 = mod_consts[76];
        tmp_tuple_element_48 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
        if (tmp_tuple_element_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        tmp_mod_expr_right_13 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_89;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_24 = tmp_class_creation_13__prepared;
            tmp_expression_value_89 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_89 == NULL));
            tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[75]);
            Py_DECREF(tmp_expression_value_89);
            if (tmp_tuple_element_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_48);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_38;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_38;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 178;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_38;
    }
    branch_no_49:;
    goto branch_end_48;
    branch_no_48:;
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = PyDict_New();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_106;
    }
    branch_end_48:;
    {
        PyObject *tmp_assign_source_107;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_Xlib$ext$shape$$$class__13_GetRectangles_178 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[13];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_40;
        }
        if (isFrameUnusable(cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14)) {
            Py_XDECREF(cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14);

#if _DEBUG_REFCOUNTS
            if (cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14 = MAKE_FUNCTION_FRAME(codeobj_281bb888ea9f1c2f7a6d6d0256b09498, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_type_description == NULL);
        frame_281bb888ea9f1c2f7a6d6d0256b09498_14 = cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_281bb888ea9f1c2f7a6d6d0256b09498_14);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_281bb888ea9f1c2f7a6d6d0256b09498_14) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_args_element_value_94;
            PyObject *tmp_called_instance_84;
            PyObject *tmp_args_element_value_95;
            PyObject *tmp_called_instance_85;
            PyObject *tmp_args_element_value_96;
            PyObject *tmp_called_instance_86;
            PyObject *tmp_args_element_value_97;
            PyObject *tmp_called_instance_87;
            PyObject *tmp_args_element_value_98;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_99;
            PyObject *tmp_called_instance_88;
            tmp_expression_value_90 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_expression_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_90 == NULL)) {
                        tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_90 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 180;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_expression_value_90);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[93]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_84 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_84 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_84 == NULL)) {
                        tmp_called_instance_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_84 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);

                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_84);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 181;
            tmp_args_element_value_94 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_84,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[112], 0)
            );

            Py_DECREF(tmp_called_instance_84);
            if (tmp_args_element_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);

                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_85 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_85 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_85 == NULL)) {
                        tmp_called_instance_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_85 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_args_element_value_94);

                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_85);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 182;
            tmp_args_element_value_95 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_85,
                mod_consts[113],
                PyTuple_GET_ITEM(mod_consts[155], 0)
            );

            Py_DECREF(tmp_called_instance_85);
            if (tmp_args_element_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_94);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_86 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_86 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_86 == NULL)) {
                        tmp_called_instance_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_86 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_args_element_value_94);
                        Py_DECREF(tmp_args_element_value_95);

                        exception_lineno = 183;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_86);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 183;
            tmp_args_element_value_96 = CALL_METHOD_NO_ARGS(tmp_called_instance_86, mod_consts[115]);
            Py_DECREF(tmp_called_instance_86);
            if (tmp_args_element_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_95);

                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_87 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_87 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_87 == NULL)) {
                        tmp_called_instance_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_args_element_value_94);
                        Py_DECREF(tmp_args_element_value_95);
                        Py_DECREF(tmp_args_element_value_96);

                        exception_lineno = 184;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_87);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 184;
            tmp_args_element_value_97 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_87,
                mod_consts[98],
                PyTuple_GET_ITEM(mod_consts[156], 0)
            );

            Py_DECREF(tmp_called_instance_87);
            if (tmp_args_element_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_95);
                Py_DECREF(tmp_args_element_value_96);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_value_49 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[0]);

            if (tmp_called_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_called_value_49 == NULL)) {
                        tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_called_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_args_element_value_94);
                        Py_DECREF(tmp_args_element_value_95);
                        Py_DECREF(tmp_args_element_value_96);
                        Py_DECREF(tmp_args_element_value_97);

                        exception_lineno = 185;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_value_49);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 185;
            tmp_args_element_value_98 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_49, mod_consts[137]);

            Py_DECREF(tmp_called_value_49);
            if (tmp_args_element_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_95);
                Py_DECREF(tmp_args_element_value_96);
                Py_DECREF(tmp_args_element_value_97);

                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_88 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_88 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_88 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_88 == NULL)) {
                        tmp_called_instance_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_88 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_args_element_value_94);
                        Py_DECREF(tmp_args_element_value_95);
                        Py_DECREF(tmp_args_element_value_96);
                        Py_DECREF(tmp_args_element_value_97);
                        Py_DECREF(tmp_args_element_value_98);

                        exception_lineno = 186;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_88);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 186;
            tmp_args_element_value_99 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_88,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[136], 0)
            );

            Py_DECREF(tmp_called_instance_88);
            if (tmp_args_element_value_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_95);
                Py_DECREF(tmp_args_element_value_96);
                Py_DECREF(tmp_args_element_value_97);
                Py_DECREF(tmp_args_element_value_98);

                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 180;
            {
                PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_48, call_args);
            }

            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_args_element_value_95);
            Py_DECREF(tmp_args_element_value_96);
            Py_DECREF(tmp_args_element_value_97);
            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_99);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_called_value_50;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_args_element_value_100;
            PyObject *tmp_called_instance_89;
            PyObject *tmp_args_element_value_101;
            PyObject *tmp_called_instance_90;
            PyObject *tmp_args_element_value_102;
            PyObject *tmp_called_instance_91;
            PyObject *tmp_args_element_value_103;
            PyObject *tmp_called_instance_92;
            PyObject *tmp_args_element_value_104;
            PyObject *tmp_called_instance_93;
            PyObject *tmp_args_element_value_105;
            PyObject *tmp_called_instance_94;
            PyObject *tmp_args_element_value_106;
            PyObject *tmp_called_value_51;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_args_value_27;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_kwargs_value_27;
            tmp_expression_value_91 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_expression_value_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_91 == NULL)) {
                        tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_91 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_expression_value_91);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[93]);
            Py_DECREF(tmp_expression_value_91);
            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_89 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_89 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_89 == NULL)) {
                        tmp_called_instance_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_89 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);

                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_89);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 190;
            tmp_args_element_value_100 = CALL_METHOD_NO_ARGS(tmp_called_instance_89, mod_consts[117]);
            Py_DECREF(tmp_called_instance_89);
            if (tmp_args_element_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);

                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_90 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_90 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_90 == NULL)) {
                        tmp_called_instance_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_90 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);
                        Py_DECREF(tmp_args_element_value_100);

                        exception_lineno = 191;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_90);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 191;
            tmp_args_element_value_101 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_90,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[126], 0)
            );

            Py_DECREF(tmp_called_instance_90);
            if (tmp_args_element_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_100);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_91 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_91 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_91 == NULL)) {
                        tmp_called_instance_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_91 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);
                        Py_DECREF(tmp_args_element_value_100);
                        Py_DECREF(tmp_args_element_value_101);

                        exception_lineno = 192;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_91);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 192;
            tmp_args_element_value_102 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_91,
                mod_consts[96],
                PyTuple_GET_ITEM(mod_consts[97], 0)
            );

            Py_DECREF(tmp_called_instance_91);
            if (tmp_args_element_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_100);
                Py_DECREF(tmp_args_element_value_101);

                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_92 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_92 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_92 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_92 == NULL)) {
                        tmp_called_instance_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_92 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);
                        Py_DECREF(tmp_args_element_value_100);
                        Py_DECREF(tmp_args_element_value_101);
                        Py_DECREF(tmp_args_element_value_102);

                        exception_lineno = 193;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_92);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 193;
            tmp_args_element_value_103 = CALL_METHOD_NO_ARGS(tmp_called_instance_92, mod_consts[119]);
            Py_DECREF(tmp_called_instance_92);
            if (tmp_args_element_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_100);
                Py_DECREF(tmp_args_element_value_101);
                Py_DECREF(tmp_args_element_value_102);

                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_93 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_93 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_93 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_93 == NULL)) {
                        tmp_called_instance_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_93 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);
                        Py_DECREF(tmp_args_element_value_100);
                        Py_DECREF(tmp_args_element_value_101);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);

                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_93);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 194;
            tmp_args_element_value_104 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_93,
                mod_consts[157],
                &PyTuple_GET_ITEM(mod_consts[158], 0)
            );

            Py_DECREF(tmp_called_instance_93);
            if (tmp_args_element_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_100);
                Py_DECREF(tmp_args_element_value_101);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);

                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_called_instance_94 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_called_instance_94 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_94 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_called_instance_94 == NULL)) {
                        tmp_called_instance_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_called_instance_94 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);
                        Py_DECREF(tmp_args_element_value_100);
                        Py_DECREF(tmp_args_element_value_101);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);

                        exception_lineno = 195;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_94);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 195;
            tmp_args_element_value_105 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_94,
                mod_consts[108],
                PyTuple_GET_ITEM(mod_consts[159], 0)
            );

            Py_DECREF(tmp_called_instance_94);
            if (tmp_args_element_value_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_100);
                Py_DECREF(tmp_args_element_value_101);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);

                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_expression_value_92 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[64]);

            if (tmp_expression_value_92 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_92 == NULL)) {
                        tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_92 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);
                        Py_DECREF(tmp_args_element_value_100);
                        Py_DECREF(tmp_args_element_value_101);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);

                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_expression_value_92);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[130]);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_100);
                Py_DECREF(tmp_args_element_value_101);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_tuple_element_49 = mod_consts[45];
            tmp_args_value_27 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_93;
                PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_49);
                tmp_expression_value_93 = PyObject_GetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[65]);

                if (tmp_expression_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_93 == NULL)) {
                            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_expression_value_93 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 196;
                            type_description_2 = "o";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_expression_value_93);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[131]);
                Py_DECREF(tmp_expression_value_93);
                if (tmp_tuple_element_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_27, 1, tmp_tuple_element_49);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_100);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);
            Py_DECREF(tmp_args_element_value_105);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_value_27);
            goto frame_exception_exit_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_kwargs_value_27 = PyDict_Copy(mod_consts[132]);
            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 196;
            tmp_args_element_value_106 = CALL_FUNCTION(tmp_called_value_51, tmp_args_value_27, tmp_kwargs_value_27);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_value_27);
            Py_DECREF(tmp_kwargs_value_27);
            if (tmp_args_element_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_100);
                Py_DECREF(tmp_args_element_value_101);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame.f_lineno = 189;
            {
                PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_50, call_args);
            }

            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_100);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);
            Py_DECREF(tmp_args_element_value_105);
            Py_DECREF(tmp_args_element_value_106);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_281bb888ea9f1c2f7a6d6d0256b09498_14);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;

        frame_exception_exit_14:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_281bb888ea9f1c2f7a6d6d0256b09498_14);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_281bb888ea9f1c2f7a6d6d0256b09498_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_281bb888ea9f1c2f7a6d6d0256b09498_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_281bb888ea9f1c2f7a6d6d0256b09498_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_281bb888ea9f1c2f7a6d6d0256b09498_14,
            type_description_2,
            outline_12_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_281bb888ea9f1c2f7a6d6d0256b09498_14 == cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14);
            cache_frame_281bb888ea9f1c2f7a6d6d0256b09498_14 = NULL;
        }

        assertFrameObject(frame_281bb888ea9f1c2f7a6d6d0256b09498_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;

        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_40;
        skip_nested_handling_13:;
        {
            nuitka_bool tmp_condition_result_74;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_74 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_74 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_40;
            }
            if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
                goto branch_yes_50;
            } else {
                goto branch_no_50;
            }
        }
        branch_yes_50:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__13_GetRectangles_178, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_40;
        }
        branch_no_50:;
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_52 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_50 = mod_consts[13];
            tmp_args_value_28 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_50 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = locals_Xlib$ext$shape$$$class__13_GetRectangles_178;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_13__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 178;
            tmp_assign_source_108 = CALL_FUNCTION(tmp_called_value_52, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_40;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_108;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_107 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_107);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__13_GetRectangles_178);
        locals_Xlib$ext$shape$$$class__13_GetRectangles_178 = NULL;
        goto try_return_handler_39;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__13_GetRectangles_178);
        locals_Xlib$ext$shape$$$class__13_GetRectangles_178 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto try_except_handler_39;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 178;
        goto try_except_handler_38;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_107);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = PyDict_New();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_109;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_metaclass_value_14;
        bool tmp_condition_result_75;
        PyObject *tmp_key_value_40;
        PyObject *tmp_dict_arg_value_40;
        PyObject *tmp_dict_arg_value_41;
        PyObject *tmp_key_value_41;
        PyObject *tmp_bases_value_14;
        tmp_key_value_40 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_40 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_40, tmp_key_value_40);
        assert(!(tmp_res == -1));
        tmp_condition_result_75 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_75 != false) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_41 = tmp_class_creation_14__class_decl_dict;
        tmp_key_value_41 = mod_consts[69];
        tmp_metaclass_value_14 = DICT_GET_ITEM0(tmp_dict_arg_value_41, tmp_key_value_41);
        if (tmp_metaclass_value_14 == NULL) {
            tmp_metaclass_value_14 = Py_None;
        }
        assert(!(tmp_metaclass_value_14 == NULL));
        goto condexpr_end_25;
        condexpr_false_25:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        condexpr_end_25:;
        tmp_bases_value_14 = mod_consts[70];
        tmp_assign_source_110 = SELECT_METACLASS(tmp_metaclass_value_14, tmp_bases_value_14);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_110;
    }
    {
        bool tmp_condition_result_76;
        PyObject *tmp_key_value_42;
        PyObject *tmp_dict_arg_value_42;
        tmp_key_value_42 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_42 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_42, tmp_key_value_42);
        assert(!(tmp_res == -1));
        tmp_condition_result_76 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_76 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;
    tmp_dictdel_key = mod_consts[69];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 199;

        goto try_except_handler_41;
    }
    branch_no_51:;
    {
        nuitka_bool tmp_condition_result_77;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_94 = tmp_class_creation_14__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_94, mod_consts[71]);
        tmp_condition_result_77 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_value_29;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_95 = tmp_class_creation_14__metaclass;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[71]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto try_except_handler_41;
        }
        tmp_args_value_29 = mod_consts[160];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_14__class_decl_dict;
        frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 199;
        tmp_assign_source_111 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_53);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_111;
    }
    {
        bool tmp_condition_result_78;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_96;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_96 = tmp_class_creation_14__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_96, mod_consts[73]);
        tmp_operand_value_14 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto try_except_handler_41;
        }
        tmp_condition_result_78 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_78 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_getattr_target_14;
        PyObject *tmp_getattr_attr_14;
        PyObject *tmp_getattr_default_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_getattr_target_14 = tmp_class_creation_14__metaclass;
        tmp_getattr_attr_14 = mod_consts[75];
        tmp_getattr_default_14 = mod_consts[76];
        tmp_tuple_element_51 = BUILTIN_GETATTR(tmp_getattr_target_14, tmp_getattr_attr_14, tmp_getattr_default_14);
        if (tmp_tuple_element_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto try_except_handler_41;
        }
        tmp_mod_expr_right_14 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_97;
            PyObject *tmp_type_arg_25;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_25 = tmp_class_creation_14__prepared;
            tmp_expression_value_97 = BUILTIN_TYPE1(tmp_type_arg_25);
            assert(!(tmp_expression_value_97 == NULL));
            tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[75]);
            Py_DECREF(tmp_expression_value_97);
            if (tmp_tuple_element_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_51);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_41;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto try_except_handler_41;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 199;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_41;
    }
    branch_no_53:;
    goto branch_end_52;
    branch_no_52:;
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = PyDict_New();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_112;
    }
    branch_end_52:;
    {
        PyObject *tmp_assign_source_113;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_Xlib$ext$shape$$$class__14_Event_199 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__14_Event_199, mod_consts[78], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__14_Event_199, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto try_except_handler_43;
        }
        if (isFrameUnusable(cache_frame_31daf2f1ae1ce31897257370825a3446_15)) {
            Py_XDECREF(cache_frame_31daf2f1ae1ce31897257370825a3446_15);

#if _DEBUG_REFCOUNTS
            if (cache_frame_31daf2f1ae1ce31897257370825a3446_15 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_31daf2f1ae1ce31897257370825a3446_15 = MAKE_FUNCTION_FRAME(codeobj_31daf2f1ae1ce31897257370825a3446, module_Xlib$ext$shape, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_31daf2f1ae1ce31897257370825a3446_15->m_type_description == NULL);
        frame_31daf2f1ae1ce31897257370825a3446_15 = cache_frame_31daf2f1ae1ce31897257370825a3446_15;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_31daf2f1ae1ce31897257370825a3446_15);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_31daf2f1ae1ce31897257370825a3446_15) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$shape$$$class__14_Event_199, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_2 = "o";
            goto frame_exception_exit_15;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_31daf2f1ae1ce31897257370825a3446_15);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_14;

        frame_exception_exit_15:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_31daf2f1ae1ce31897257370825a3446_15);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_31daf2f1ae1ce31897257370825a3446_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_31daf2f1ae1ce31897257370825a3446_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_31daf2f1ae1ce31897257370825a3446_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_31daf2f1ae1ce31897257370825a3446_15,
            type_description_2,
            outline_13_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_31daf2f1ae1ce31897257370825a3446_15 == cache_frame_31daf2f1ae1ce31897257370825a3446_15) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_31daf2f1ae1ce31897257370825a3446_15);
            cache_frame_31daf2f1ae1ce31897257370825a3446_15 = NULL;
        }

        assertFrameObject(frame_31daf2f1ae1ce31897257370825a3446_15);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_14;

        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_43;
        skip_nested_handling_14:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_54 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_52 = mod_consts[50];
            tmp_args_value_30 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = mod_consts[70];
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_52);
            tmp_tuple_element_52 = locals_Xlib$ext$shape$$$class__14_Event_199;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_52);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_14__class_decl_dict;
            frame_efe4a631f85ec7ba8e746824491205f7->m_frame.f_lineno = 199;
            tmp_assign_source_114 = CALL_FUNCTION(tmp_called_value_54, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto try_except_handler_43;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_114;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_113 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_113);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_Xlib$ext$shape$$$class__14_Event_199);
        locals_Xlib$ext$shape$$$class__14_Event_199 = NULL;
        goto try_return_handler_42;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$shape$$$class__14_Event_199);
        locals_Xlib$ext$shape$$$class__14_Event_199 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_42;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 199;
        goto try_except_handler_41;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_113);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_efe4a631f85ec7ba8e746824491205f7);
#endif
    popFrameStack();

    assertFrameObject(frame_efe4a631f85ec7ba8e746824491205f7);

    goto frame_no_exception_15;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_efe4a631f85ec7ba8e746824491205f7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_efe4a631f85ec7ba8e746824491205f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_efe4a631f85ec7ba8e746824491205f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_efe4a631f85ec7ba8e746824491205f7, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_15:;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    {
        PyObject *tmp_assign_source_115;


        tmp_assign_source_115 = MAKE_FUNCTION_Xlib$ext$shape$$$function__2_combine();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;


        tmp_assign_source_116 = MAKE_FUNCTION_Xlib$ext$shape$$$function__3_get_rectangles();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;


        tmp_assign_source_117 = MAKE_FUNCTION_Xlib$ext$shape$$$function__4_input_selected();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;


        tmp_assign_source_118 = MAKE_FUNCTION_Xlib$ext$shape$$$function__5_mask();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;


        tmp_assign_source_119 = MAKE_FUNCTION_Xlib$ext$shape$$$function__6_offset();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;


        tmp_assign_source_120 = MAKE_FUNCTION_Xlib$ext$shape$$$function__7_query_extents();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;


        tmp_assign_source_121 = MAKE_FUNCTION_Xlib$ext$shape$$$function__8_query_version();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;


        tmp_assign_source_122 = MAKE_FUNCTION_Xlib$ext$shape$$$function__9_rectangles();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;


        tmp_assign_source_123 = MAKE_FUNCTION_Xlib$ext$shape$$$function__10_select_input();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;


        tmp_assign_source_124 = MAKE_FUNCTION_Xlib$ext$shape$$$function__11_init();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_124);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Xlib.ext.shape", false);

    Py_INCREF(module_Xlib$ext$shape);
    return module_Xlib$ext$shape;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$shape, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Xlib$ext$shape", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
