/* Generated code for Python module 'Xlib.ext.xinerama'
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

/* The "module_Xlib$ext$xinerama" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Xlib$ext$xinerama;
PyDictObject *moduledict_Xlib$ext$xinerama;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[109];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[109];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Xlib.ext.xinerama"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 109; i++) {
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
void checkModuleConstants_Xlib$ext$xinerama(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 109; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1f8e1540f3973214b5f0f99ed211a5fb;
static PyCodeObject *codeobj_6de2bd953aa1f596b09a0a48b26cb6dd;
static PyCodeObject *codeobj_6ac7d5fa4a7bc29c97968c88e1180dfb;
static PyCodeObject *codeobj_546d262eede1e277dfff8a1be3d052ca;
static PyCodeObject *codeobj_1eaa6a2a11aac5a7803b495120684121;
static PyCodeObject *codeobj_5f88af3cca2b9f57adfdeba002e7a52a;
static PyCodeObject *codeobj_ae811ed07746e6b90cfed3ad48e4d05b;
static PyCodeObject *codeobj_d6493ec7a7e44fbf1e1a31872d5de64c;
static PyCodeObject *codeobj_ef1dcb577f52bbb341715fc34d3b3208;
static PyCodeObject *codeobj_d70a043f1ff9bd11bab81051d1d7d1c5;
static PyCodeObject *codeobj_f139f79f98855c8103481a61a8850cc3;
static PyCodeObject *codeobj_a23a24cd667aafa7f53674e3cf7bb142;
static PyCodeObject *codeobj_9d62bb3ee5175755c3ccb6ea791c6c2c;
static PyCodeObject *codeobj_64b4bad9145589233c1424f843658299;
static PyCodeObject *codeobj_6b21e2ba46bd4128a959d41f1ba877c6;
static PyCodeObject *codeobj_e3eebda65ccd2474e8a98460d433490d;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[37]; CHECK_OBJECT(module_filename_obj);
    codeobj_1f8e1540f3973214b5f0f99ed211a5fb = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[101], NULL, NULL, 0, 0, 0);
    codeobj_6de2bd953aa1f596b09a0a48b26cb6dd = MAKE_CODEOBJECT(module_filename_obj, 195, CO_NOFREE, mod_consts[17], mod_consts[102], NULL, 0, 0, 0);
    codeobj_6ac7d5fa4a7bc29c97968c88e1180dfb = MAKE_CODEOBJECT(module_filename_obj, 94, CO_NOFREE, mod_consts[9], mod_consts[102], NULL, 0, 0, 0);
    codeobj_546d262eede1e277dfff8a1be3d052ca = MAKE_CODEOBJECT(module_filename_obj, 117, CO_NOFREE, mod_consts[10], mod_consts[102], NULL, 0, 0, 0);
    codeobj_1eaa6a2a11aac5a7803b495120684121 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_NOFREE, mod_consts[6], mod_consts[102], NULL, 0, 0, 0);
    codeobj_5f88af3cca2b9f57adfdeba002e7a52a = MAKE_CODEOBJECT(module_filename_obj, 148, CO_NOFREE, mod_consts[13], mod_consts[102], NULL, 0, 0, 0);
    codeobj_ae811ed07746e6b90cfed3ad48e4d05b = MAKE_CODEOBJECT(module_filename_obj, 171, CO_NOFREE, mod_consts[16], mod_consts[102], NULL, 0, 0, 0);
    codeobj_d6493ec7a7e44fbf1e1a31872d5de64c = MAKE_CODEOBJECT(module_filename_obj, 44, CO_NOFREE, mod_consts[0], mod_consts[102], NULL, 0, 0, 0);
    codeobj_ef1dcb577f52bbb341715fc34d3b3208 = MAKE_CODEOBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[103], NULL, 2, 0, 0);
    codeobj_d70a043f1ff9bd11bab81051d1d7d1c5 = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[104], NULL, 1, 0, 0);
    codeobj_f139f79f98855c8103481a61a8850cc3 = MAKE_CODEOBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[105], NULL, 2, 0, 0);
    codeobj_a23a24cd667aafa7f53674e3cf7bb142 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[104], NULL, 1, 0, 0);
    codeobj_9d62bb3ee5175755c3ccb6ea791c6c2c = MAKE_CODEOBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[106], NULL, 2, 0, 0);
    codeobj_64b4bad9145589233c1424f843658299 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[107], NULL, 1, 0, 0);
    codeobj_6b21e2ba46bd4128a959d41f1ba877c6 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[104], NULL, 1, 0, 0);
    codeobj_e3eebda65ccd2474e8a98460d433490d = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[104], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__1_query_version();


static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__2_get_state();


static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__3_get_screen_count();


static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__4_get_screen_size();


static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__5_is_active();


static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__6_query_screens();


static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__7_get_info();


static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__8_init();


// The module function definitions.
static PyObject *impl_Xlib$ext$xinerama$$$function__1_query_version(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e3eebda65ccd2474e8a98460d433490d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e3eebda65ccd2474e8a98460d433490d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e3eebda65ccd2474e8a98460d433490d)) {
        Py_XDECREF(cache_frame_e3eebda65ccd2474e8a98460d433490d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3eebda65ccd2474e8a98460d433490d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3eebda65ccd2474e8a98460d433490d = MAKE_FUNCTION_FRAME(codeobj_e3eebda65ccd2474e8a98460d433490d, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e3eebda65ccd2474e8a98460d433490d->m_type_description == NULL);
    frame_e3eebda65ccd2474e8a98460d433490d = cache_frame_e3eebda65ccd2474e8a98460d433490d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e3eebda65ccd2474e8a98460d433490d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e3eebda65ccd2474e8a98460d433490d) == 2); // Frame stack

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
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e3eebda65ccd2474e8a98460d433490d->m_frame.f_lineno = 66;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = mod_consts[4];
        tmp_kw_call_value_3_1 = mod_consts[4];
        frame_e3eebda65ccd2474e8a98460d433490d->m_frame.f_lineno = 65;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[5]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3eebda65ccd2474e8a98460d433490d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3eebda65ccd2474e8a98460d433490d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3eebda65ccd2474e8a98460d433490d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e3eebda65ccd2474e8a98460d433490d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3eebda65ccd2474e8a98460d433490d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3eebda65ccd2474e8a98460d433490d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3eebda65ccd2474e8a98460d433490d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e3eebda65ccd2474e8a98460d433490d == cache_frame_e3eebda65ccd2474e8a98460d433490d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e3eebda65ccd2474e8a98460d433490d);
        cache_frame_e3eebda65ccd2474e8a98460d433490d = NULL;
    }

    assertFrameObject(frame_e3eebda65ccd2474e8a98460d433490d);

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


static PyObject *impl_Xlib$ext$xinerama$$$function__2_get_state(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a23a24cd667aafa7f53674e3cf7bb142;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a23a24cd667aafa7f53674e3cf7bb142 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a23a24cd667aafa7f53674e3cf7bb142)) {
        Py_XDECREF(cache_frame_a23a24cd667aafa7f53674e3cf7bb142);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a23a24cd667aafa7f53674e3cf7bb142 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a23a24cd667aafa7f53674e3cf7bb142 = MAKE_FUNCTION_FRAME(codeobj_a23a24cd667aafa7f53674e3cf7bb142, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a23a24cd667aafa7f53674e3cf7bb142->m_type_description == NULL);
    frame_a23a24cd667aafa7f53674e3cf7bb142 = cache_frame_a23a24cd667aafa7f53674e3cf7bb142;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a23a24cd667aafa7f53674e3cf7bb142);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a23a24cd667aafa7f53674e3cf7bb142) == 2); // Frame stack

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
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a23a24cd667aafa7f53674e3cf7bb142->m_frame.f_lineno = 89;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a23a24cd667aafa7f53674e3cf7bb142->m_frame.f_lineno = 88;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a23a24cd667aafa7f53674e3cf7bb142);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a23a24cd667aafa7f53674e3cf7bb142);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a23a24cd667aafa7f53674e3cf7bb142);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a23a24cd667aafa7f53674e3cf7bb142, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a23a24cd667aafa7f53674e3cf7bb142->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a23a24cd667aafa7f53674e3cf7bb142, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a23a24cd667aafa7f53674e3cf7bb142,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a23a24cd667aafa7f53674e3cf7bb142 == cache_frame_a23a24cd667aafa7f53674e3cf7bb142) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a23a24cd667aafa7f53674e3cf7bb142);
        cache_frame_a23a24cd667aafa7f53674e3cf7bb142 = NULL;
    }

    assertFrameObject(frame_a23a24cd667aafa7f53674e3cf7bb142);

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


static PyObject *impl_Xlib$ext$xinerama$$$function__3_get_screen_count(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d70a043f1ff9bd11bab81051d1d7d1c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5)) {
        Py_XDECREF(cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5 = MAKE_FUNCTION_FRAME(codeobj_d70a043f1ff9bd11bab81051d1d7d1c5, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5->m_type_description == NULL);
    frame_d70a043f1ff9bd11bab81051d1d7d1c5 = cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d70a043f1ff9bd11bab81051d1d7d1c5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d70a043f1ff9bd11bab81051d1d7d1c5) == 2); // Frame stack

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
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d70a043f1ff9bd11bab81051d1d7d1c5->m_frame.f_lineno = 112;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d70a043f1ff9bd11bab81051d1d7d1c5->m_frame.f_lineno = 111;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d70a043f1ff9bd11bab81051d1d7d1c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d70a043f1ff9bd11bab81051d1d7d1c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d70a043f1ff9bd11bab81051d1d7d1c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d70a043f1ff9bd11bab81051d1d7d1c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d70a043f1ff9bd11bab81051d1d7d1c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d70a043f1ff9bd11bab81051d1d7d1c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d70a043f1ff9bd11bab81051d1d7d1c5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d70a043f1ff9bd11bab81051d1d7d1c5 == cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5);
        cache_frame_d70a043f1ff9bd11bab81051d1d7d1c5 = NULL;
    }

    assertFrameObject(frame_d70a043f1ff9bd11bab81051d1d7d1c5);

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


static PyObject *impl_Xlib$ext$xinerama$$$function__4_get_screen_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_screen_no = python_pars[1];
    struct Nuitka_FrameObject *frame_f139f79f98855c8103481a61a8850cc3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f139f79f98855c8103481a61a8850cc3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f139f79f98855c8103481a61a8850cc3)) {
        Py_XDECREF(cache_frame_f139f79f98855c8103481a61a8850cc3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f139f79f98855c8103481a61a8850cc3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f139f79f98855c8103481a61a8850cc3 = MAKE_FUNCTION_FRAME(codeobj_f139f79f98855c8103481a61a8850cc3, module_Xlib$ext$xinerama, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f139f79f98855c8103481a61a8850cc3->m_type_description == NULL);
    frame_f139f79f98855c8103481a61a8850cc3 = cache_frame_f139f79f98855c8103481a61a8850cc3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f139f79f98855c8103481a61a8850cc3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f139f79f98855c8103481a61a8850cc3) == 2); // Frame stack

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
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f139f79f98855c8103481a61a8850cc3->m_frame.f_lineno = 140;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_screen_no);
        tmp_kw_call_value_3_1 = par_screen_no;
        frame_f139f79f98855c8103481a61a8850cc3->m_frame.f_lineno = 139;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f139f79f98855c8103481a61a8850cc3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f139f79f98855c8103481a61a8850cc3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f139f79f98855c8103481a61a8850cc3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f139f79f98855c8103481a61a8850cc3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f139f79f98855c8103481a61a8850cc3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f139f79f98855c8103481a61a8850cc3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f139f79f98855c8103481a61a8850cc3,
        type_description_1,
        par_self,
        par_screen_no
    );


    // Release cached frame if used for exception.
    if (frame_f139f79f98855c8103481a61a8850cc3 == cache_frame_f139f79f98855c8103481a61a8850cc3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f139f79f98855c8103481a61a8850cc3);
        cache_frame_f139f79f98855c8103481a61a8850cc3 = NULL;
    }

    assertFrameObject(frame_f139f79f98855c8103481a61a8850cc3);

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
    CHECK_OBJECT(par_screen_no);
    Py_DECREF(par_screen_no);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_screen_no);
    Py_DECREF(par_screen_no);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$xinerama$$$function__5_is_active(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_64b4bad9145589233c1424f843658299;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_64b4bad9145589233c1424f843658299 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_64b4bad9145589233c1424f843658299)) {
        Py_XDECREF(cache_frame_64b4bad9145589233c1424f843658299);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64b4bad9145589233c1424f843658299 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64b4bad9145589233c1424f843658299 = MAKE_FUNCTION_FRAME(codeobj_64b4bad9145589233c1424f843658299, module_Xlib$ext$xinerama, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_64b4bad9145589233c1424f843658299->m_type_description == NULL);
    frame_64b4bad9145589233c1424f843658299 = cache_frame_64b4bad9145589233c1424f843658299;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_64b4bad9145589233c1424f843658299);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_64b4bad9145589233c1424f843658299) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_64b4bad9145589233c1424f843658299->m_frame.f_lineno = 165;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_64b4bad9145589233c1424f843658299->m_frame.f_lineno = 164;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_r);
        tmp_expression_value_4 = var_r;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_64b4bad9145589233c1424f843658299);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_64b4bad9145589233c1424f843658299);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_64b4bad9145589233c1424f843658299);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64b4bad9145589233c1424f843658299, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64b4bad9145589233c1424f843658299->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64b4bad9145589233c1424f843658299, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64b4bad9145589233c1424f843658299,
        type_description_1,
        par_self,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_64b4bad9145589233c1424f843658299 == cache_frame_64b4bad9145589233c1424f843658299) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_64b4bad9145589233c1424f843658299);
        cache_frame_64b4bad9145589233c1424f843658299 = NULL;
    }

    assertFrameObject(frame_64b4bad9145589233c1424f843658299);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_r);
    var_r = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

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


static PyObject *impl_Xlib$ext$xinerama$$$function__6_query_screens(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6b21e2ba46bd4128a959d41f1ba877c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b21e2ba46bd4128a959d41f1ba877c6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b21e2ba46bd4128a959d41f1ba877c6)) {
        Py_XDECREF(cache_frame_6b21e2ba46bd4128a959d41f1ba877c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b21e2ba46bd4128a959d41f1ba877c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b21e2ba46bd4128a959d41f1ba877c6 = MAKE_FUNCTION_FRAME(codeobj_6b21e2ba46bd4128a959d41f1ba877c6, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6b21e2ba46bd4128a959d41f1ba877c6->m_type_description == NULL);
    frame_6b21e2ba46bd4128a959d41f1ba877c6 = cache_frame_6b21e2ba46bd4128a959d41f1ba877c6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6b21e2ba46bd4128a959d41f1ba877c6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6b21e2ba46bd4128a959d41f1ba877c6) == 2); // Frame stack

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
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6b21e2ba46bd4128a959d41f1ba877c6->m_frame.f_lineno = 190;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6b21e2ba46bd4128a959d41f1ba877c6->m_frame.f_lineno = 189;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b21e2ba46bd4128a959d41f1ba877c6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b21e2ba46bd4128a959d41f1ba877c6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b21e2ba46bd4128a959d41f1ba877c6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b21e2ba46bd4128a959d41f1ba877c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b21e2ba46bd4128a959d41f1ba877c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b21e2ba46bd4128a959d41f1ba877c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b21e2ba46bd4128a959d41f1ba877c6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6b21e2ba46bd4128a959d41f1ba877c6 == cache_frame_6b21e2ba46bd4128a959d41f1ba877c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6b21e2ba46bd4128a959d41f1ba877c6);
        cache_frame_6b21e2ba46bd4128a959d41f1ba877c6 = NULL;
    }

    assertFrameObject(frame_6b21e2ba46bd4128a959d41f1ba877c6);

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


static PyObject *impl_Xlib$ext$xinerama$$$function__7_get_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_visual = python_pars[1];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_ef1dcb577f52bbb341715fc34d3b3208;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef1dcb577f52bbb341715fc34d3b3208 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef1dcb577f52bbb341715fc34d3b3208)) {
        Py_XDECREF(cache_frame_ef1dcb577f52bbb341715fc34d3b3208);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef1dcb577f52bbb341715fc34d3b3208 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef1dcb577f52bbb341715fc34d3b3208 = MAKE_FUNCTION_FRAME(codeobj_ef1dcb577f52bbb341715fc34d3b3208, module_Xlib$ext$xinerama, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ef1dcb577f52bbb341715fc34d3b3208->m_type_description == NULL);
    frame_ef1dcb577f52bbb341715fc34d3b3208 = cache_frame_ef1dcb577f52bbb341715fc34d3b3208;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ef1dcb577f52bbb341715fc34d3b3208);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ef1dcb577f52bbb341715fc34d3b3208) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 213;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 213;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 213;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ef1dcb577f52bbb341715fc34d3b3208->m_frame.f_lineno = 213;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 213;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_visual);
        tmp_kw_call_value_2_1 = par_visual;
        frame_ef1dcb577f52bbb341715fc34d3b3208->m_frame.f_lineno = 212;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef1dcb577f52bbb341715fc34d3b3208);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef1dcb577f52bbb341715fc34d3b3208);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef1dcb577f52bbb341715fc34d3b3208, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef1dcb577f52bbb341715fc34d3b3208->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef1dcb577f52bbb341715fc34d3b3208, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef1dcb577f52bbb341715fc34d3b3208,
        type_description_1,
        par_self,
        par_visual,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_ef1dcb577f52bbb341715fc34d3b3208 == cache_frame_ef1dcb577f52bbb341715fc34d3b3208) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ef1dcb577f52bbb341715fc34d3b3208);
        cache_frame_ef1dcb577f52bbb341715fc34d3b3208 = NULL;
    }

    assertFrameObject(frame_ef1dcb577f52bbb341715fc34d3b3208);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
    goto function_return_exit;
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_visual);
    Py_DECREF(par_visual);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_visual);
    Py_DECREF(par_visual);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$xinerama$$$function__8_init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_disp = python_pars[0];
    PyObject *par_info = python_pars[1];
    struct Nuitka_FrameObject *frame_9d62bb3ee5175755c3ccb6ea791c6c2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c)) {
        Py_XDECREF(cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c = MAKE_FUNCTION_FRAME(codeobj_9d62bb3ee5175755c3ccb6ea791c6c2c, module_Xlib$ext$xinerama, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_type_description == NULL);
    frame_9d62bb3ee5175755c3ccb6ea791c6c2c = cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9d62bb3ee5175755c3ccb6ea791c6c2c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9d62bb3ee5175755c3ccb6ea791c6c2c) == 2); // Frame stack

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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[1];
        tmp_args_element_value_2 = mod_consts[20];
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[22];
        tmp_args_element_value_5 = mod_consts[23];
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
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
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[22];
        tmp_args_element_value_8 = mod_consts[25];
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[22];
        tmp_args_element_value_11 = mod_consts[27];
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[19]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[1];
        tmp_args_element_value_14 = mod_consts[29];
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
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
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[19]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[1];
        tmp_args_element_value_17 = mod_consts[31];
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
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
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[1];
        tmp_args_element_value_20 = mod_consts[33];
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d62bb3ee5175755c3ccb6ea791c6c2c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d62bb3ee5175755c3ccb6ea791c6c2c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d62bb3ee5175755c3ccb6ea791c6c2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d62bb3ee5175755c3ccb6ea791c6c2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d62bb3ee5175755c3ccb6ea791c6c2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d62bb3ee5175755c3ccb6ea791c6c2c,
        type_description_1,
        par_disp,
        par_info
    );


    // Release cached frame if used for exception.
    if (frame_9d62bb3ee5175755c3ccb6ea791c6c2c == cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c);
        cache_frame_9d62bb3ee5175755c3ccb6ea791c6c2c = NULL;
    }

    assertFrameObject(frame_9d62bb3ee5175755c3ccb6ea791c6c2c);

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



static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__1_query_version() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$xinerama$$$function__1_query_version,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e3eebda65ccd2474e8a98460d433490d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$xinerama,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__2_get_state() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$xinerama$$$function__2_get_state,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a23a24cd667aafa7f53674e3cf7bb142,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$xinerama,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__3_get_screen_count() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$xinerama$$$function__3_get_screen_count,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d70a043f1ff9bd11bab81051d1d7d1c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$xinerama,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__4_get_screen_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$xinerama$$$function__4_get_screen_size,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f139f79f98855c8103481a61a8850cc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$xinerama,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__5_is_active() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$xinerama$$$function__5_is_active,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_64b4bad9145589233c1424f843658299,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$xinerama,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__6_query_screens() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$xinerama$$$function__6_query_screens,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b21e2ba46bd4128a959d41f1ba877c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$xinerama,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__7_get_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$xinerama$$$function__7_get_info,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef1dcb577f52bbb341715fc34d3b3208,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$xinerama,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$xinerama$$$function__8_init() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$xinerama$$$function__8_init,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d62bb3ee5175755c3ccb6ea791c6c2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$xinerama,
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

function_impl_code functable_Xlib$ext$xinerama[] = {
    impl_Xlib$ext$xinerama$$$function__1_query_version,
    impl_Xlib$ext$xinerama$$$function__2_get_state,
    impl_Xlib$ext$xinerama$$$function__3_get_screen_count,
    impl_Xlib$ext$xinerama$$$function__4_get_screen_size,
    impl_Xlib$ext$xinerama$$$function__5_is_active,
    impl_Xlib$ext$xinerama$$$function__6_query_screens,
    impl_Xlib$ext$xinerama$$$function__7_get_info,
    impl_Xlib$ext$xinerama$$$function__8_init,
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

    function_impl_code *current = functable_Xlib$ext$xinerama;
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

    if (offset > sizeof(functable_Xlib$ext$xinerama) || offset < 0) {
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
        functable_Xlib$ext$xinerama[offset],
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
        module_Xlib$ext$xinerama,
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
PyObject *modulecode_Xlib$ext$xinerama(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Xlib.ext.xinerama");

    // Store the module for future use.
    module_Xlib$ext$xinerama = module;

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
        PRINT_STRING("Xlib.ext.xinerama: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.ext.xinerama: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.ext.xinerama: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initXlib$ext$xinerama\n");

    moduledict_Xlib$ext$xinerama = MODULE_DICT(module_Xlib$ext$xinerama);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Xlib$ext$xinerama,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Xlib$ext$xinerama,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[108]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Xlib$ext$xinerama,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$ext$xinerama,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$ext$xinerama,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Xlib$ext$xinerama);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Xlib$ext$xinerama);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1f8e1540f3973214b5f0f99ed211a5fb;
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
    PyObject *locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d6493ec7a7e44fbf1e1a31872d5de64c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2 = NULL;
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
    PyObject *locals_Xlib$ext$xinerama$$$class__2_GetState_71 = NULL;
    struct Nuitka_FrameObject *frame_1eaa6a2a11aac5a7803b495120684121_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1eaa6a2a11aac5a7803b495120684121_3 = NULL;
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
    PyObject *locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94 = NULL;
    struct Nuitka_FrameObject *frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4 = NULL;
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
    PyObject *locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117 = NULL;
    struct Nuitka_FrameObject *frame_546d262eede1e277dfff8a1be3d052ca_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_546d262eede1e277dfff8a1be3d052ca_5 = NULL;
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
    PyObject *locals_Xlib$ext$xinerama$$$class__5_IsActive_148 = NULL;
    struct Nuitka_FrameObject *frame_5f88af3cca2b9f57adfdeba002e7a52a_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6 = NULL;
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
    PyObject *locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171 = NULL;
    struct Nuitka_FrameObject *frame_ae811ed07746e6b90cfed3ad48e4d05b_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7 = NULL;
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
    PyObject *locals_Xlib$ext$xinerama$$$class__7_GetInfo_195 = NULL;
    struct Nuitka_FrameObject *frame_6de2bd953aa1f596b09a0a48b26cb6dd_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_1f8e1540f3973214b5f0f99ed211a5fb = MAKE_MODULE_FRAME(codeobj_1f8e1540f3973214b5f0f99ed211a5fb, module_Xlib$ext$xinerama);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_1f8e1540f3973214b5f0f99ed211a5fb);
    assert(Py_REFCNT(frame_1f8e1540f3973214b5f0f99ed211a5fb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[37];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[41], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Xlib$ext$xinerama;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[44];
        tmp_level_value_1 = mod_consts[45];
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 38;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_Xlib$ext$xinerama,
                mod_consts[46],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[47];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_Xlib$ext$xinerama;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[48];
        tmp_level_value_2 = mod_consts[45];
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 39;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_Xlib$ext$xinerama,
                mod_consts[49],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[49]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_Xlib$ext$xinerama,
                mod_consts[50],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[50]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        tmp_assign_source_9 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[53];
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
        tmp_key_value_2 = mod_consts[53];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[45];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[53];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 44;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[54]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[54]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[0];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 44;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[55]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[57];
        tmp_getattr_default_1 = mod_consts[58];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[57]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 44;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 44;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2)) {
            Py_XDECREF(cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2 = MAKE_FUNCTION_FRAME(codeobj_d6493ec7a7e44fbf1e1a31872d5de64c, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_type_description == NULL);
        frame_d6493ec7a7e44fbf1e1a31872d5de64c_2 = cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d6493ec7a7e44fbf1e1a31872d5de64c_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d6493ec7a7e44fbf1e1a31872d5de64c_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_instance_6;
            tmp_expression_value_7 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[62]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_1 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 46;
            tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_1,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[64], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_2 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);
                        Py_DECREF(tmp_args_element_value_1);

                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 47;
            tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_2,
                mod_consts[65],
                PyTuple_GET_ITEM(mod_consts[66], 0)
            );

            Py_DECREF(tmp_called_instance_2);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_3 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);

                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 48;
            tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[67]);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_4 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);

                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 49;
            tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_4,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            Py_DECREF(tmp_called_instance_4);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_5 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);

                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 50;
            tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_5,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[69], 0)
            );

            Py_DECREF(tmp_called_instance_5);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);

                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_6 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);
                        Py_DECREF(tmp_args_element_value_1);
                        Py_DECREF(tmp_args_element_value_2);
                        Py_DECREF(tmp_args_element_value_3);
                        Py_DECREF(tmp_args_element_value_4);
                        Py_DECREF(tmp_args_element_value_5);

                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 51;
            tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_6,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_6);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_5);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 45;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_instance_13;
            tmp_expression_value_8 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[62]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_7 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 55;
            tmp_args_element_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[73]);
            Py_DECREF(tmp_called_instance_7);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_8 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_args_element_value_7);

                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 56;
            tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_8,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[74], 0)
            );

            Py_DECREF(tmp_called_instance_8);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_9 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_9 == NULL)) {
                        tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_args_element_value_7);
                        Py_DECREF(tmp_args_element_value_8);

                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 57;
            tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_9,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            Py_DECREF(tmp_called_instance_9);
            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_10 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_args_element_value_7);
                        Py_DECREF(tmp_args_element_value_8);
                        Py_DECREF(tmp_args_element_value_9);

                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 58;
            tmp_args_element_value_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[77]);
            Py_DECREF(tmp_called_instance_10);
            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_9);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_11 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_11 == NULL)) {
                        tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_args_element_value_7);
                        Py_DECREF(tmp_args_element_value_8);
                        Py_DECREF(tmp_args_element_value_9);
                        Py_DECREF(tmp_args_element_value_10);

                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 59;
            tmp_args_element_value_11 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_11,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            Py_DECREF(tmp_called_instance_11);
            if (tmp_args_element_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_9);
                Py_DECREF(tmp_args_element_value_10);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_12 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_12 == NULL)) {
                        tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_args_element_value_7);
                        Py_DECREF(tmp_args_element_value_8);
                        Py_DECREF(tmp_args_element_value_9);
                        Py_DECREF(tmp_args_element_value_10);
                        Py_DECREF(tmp_args_element_value_11);

                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 60;
            tmp_args_element_value_12 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_12,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[69], 0)
            );

            Py_DECREF(tmp_called_instance_12);
            if (tmp_args_element_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_9);
                Py_DECREF(tmp_args_element_value_10);
                Py_DECREF(tmp_args_element_value_11);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_13 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[49]);

            if (tmp_called_instance_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_13 == NULL)) {
                        tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_args_element_value_7);
                        Py_DECREF(tmp_args_element_value_8);
                        Py_DECREF(tmp_args_element_value_9);
                        Py_DECREF(tmp_args_element_value_10);
                        Py_DECREF(tmp_args_element_value_11);
                        Py_DECREF(tmp_args_element_value_12);

                        exception_lineno = 61;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 61;
            tmp_args_element_value_13 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_13,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[78], 0)
            );

            Py_DECREF(tmp_called_instance_13);
            if (tmp_args_element_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_9);
                Py_DECREF(tmp_args_element_value_10);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_12);

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d6493ec7a7e44fbf1e1a31872d5de64c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d6493ec7a7e44fbf1e1a31872d5de64c_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d6493ec7a7e44fbf1e1a31872d5de64c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d6493ec7a7e44fbf1e1a31872d5de64c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d6493ec7a7e44fbf1e1a31872d5de64c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d6493ec7a7e44fbf1e1a31872d5de64c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d6493ec7a7e44fbf1e1a31872d5de64c_2 == cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2);
            cache_frame_d6493ec7a7e44fbf1e1a31872d5de64c_2 = NULL;
        }

        assertFrameObject(frame_d6493ec7a7e44fbf1e1a31872d5de64c_2);

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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[0];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 44;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44);
        locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44 = NULL;
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

        Py_DECREF(locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44);
        locals_Xlib$ext$xinerama$$$class__1_QueryVersion_44 = NULL;
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
        exception_lineno = 44;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_15);
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
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
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
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
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_Xlib$ext$xinerama$$$function__1_query_version();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[52]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        tmp_assign_source_18 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_18, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_19 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[53];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_10 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[45];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[53];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 71;

        goto try_except_handler_5;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[54]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[54]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[6];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 71;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_13 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[55]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[57];
        tmp_getattr_default_2 = mod_consts[58];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[57]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
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


            exception_lineno = 71;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 71;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_23;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_Xlib$ext$xinerama$$$class__2_GetState_71 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[6];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_1eaa6a2a11aac5a7803b495120684121_3)) {
            Py_XDECREF(cache_frame_1eaa6a2a11aac5a7803b495120684121_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1eaa6a2a11aac5a7803b495120684121_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1eaa6a2a11aac5a7803b495120684121_3 = MAKE_FUNCTION_FRAME(codeobj_1eaa6a2a11aac5a7803b495120684121, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1eaa6a2a11aac5a7803b495120684121_3->m_type_description == NULL);
        frame_1eaa6a2a11aac5a7803b495120684121_3 = cache_frame_1eaa6a2a11aac5a7803b495120684121_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1eaa6a2a11aac5a7803b495120684121_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1eaa6a2a11aac5a7803b495120684121_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_called_instance_17;
            tmp_expression_value_15 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[62]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_14 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_14 == NULL)) {
                        tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 73;
            tmp_args_element_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_14,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[64], 0)
            );

            Py_DECREF(tmp_called_instance_14);
            if (tmp_args_element_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_15 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_15 == NULL)) {
                        tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);
                        Py_DECREF(tmp_args_element_value_14);

                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 74;
            tmp_args_element_value_15 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_15,
                mod_consts[65],
                PyTuple_GET_ITEM(mod_consts[74], 0)
            );

            Py_DECREF(tmp_called_instance_15);
            if (tmp_args_element_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_args_element_value_14);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_16 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_16 == NULL)) {
                        tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);
                        Py_DECREF(tmp_args_element_value_14);
                        Py_DECREF(tmp_args_element_value_15);

                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 75;
            tmp_args_element_value_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[67]);
            Py_DECREF(tmp_called_instance_16);
            if (tmp_args_element_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_args_element_value_14);
                Py_DECREF(tmp_args_element_value_15);

                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_17 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_17 == NULL)) {
                        tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);
                        Py_DECREF(tmp_args_element_value_14);
                        Py_DECREF(tmp_args_element_value_15);
                        Py_DECREF(tmp_args_element_value_16);

                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_17);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 76;
            tmp_args_element_value_17 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_17,
                mod_consts[81],
                PyTuple_GET_ITEM(mod_consts[82], 0)
            );

            Py_DECREF(tmp_called_instance_17);
            if (tmp_args_element_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_args_element_value_14);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_6, call_args);
            }

            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_called_instance_23;
            tmp_expression_value_16 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[62]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_18 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_18 == NULL)) {
                        tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 79;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 79;
            tmp_args_element_value_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[73]);
            Py_DECREF(tmp_called_instance_18);
            if (tmp_args_element_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_19 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_19 == NULL)) {
                        tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);
                        Py_DECREF(tmp_args_element_value_18);

                        exception_lineno = 80;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 80;
            tmp_args_element_value_19 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_19,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[84], 0)
            );

            Py_DECREF(tmp_called_instance_19);
            if (tmp_args_element_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_18);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_20 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_20 == NULL)) {
                        tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);
                        Py_DECREF(tmp_args_element_value_18);
                        Py_DECREF(tmp_args_element_value_19);

                        exception_lineno = 81;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_20);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 81;
            tmp_args_element_value_20 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_20,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            Py_DECREF(tmp_called_instance_20);
            if (tmp_args_element_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);

                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_21 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_21 == NULL)) {
                        tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);
                        Py_DECREF(tmp_args_element_value_18);
                        Py_DECREF(tmp_args_element_value_19);
                        Py_DECREF(tmp_args_element_value_20);

                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_21);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 82;
            tmp_args_element_value_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[77]);
            Py_DECREF(tmp_called_instance_21);
            if (tmp_args_element_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_20);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_22 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_22 == NULL)) {
                        tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);
                        Py_DECREF(tmp_args_element_value_18);
                        Py_DECREF(tmp_args_element_value_19);
                        Py_DECREF(tmp_args_element_value_20);
                        Py_DECREF(tmp_args_element_value_21);

                        exception_lineno = 83;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_22);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 83;
            tmp_args_element_value_22 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_22,
                mod_consts[81],
                PyTuple_GET_ITEM(mod_consts[82], 0)
            );

            Py_DECREF(tmp_called_instance_22);
            if (tmp_args_element_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_20);
                Py_DECREF(tmp_args_element_value_21);

                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_23 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[49]);

            if (tmp_called_instance_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_23 == NULL)) {
                        tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);
                        Py_DECREF(tmp_args_element_value_18);
                        Py_DECREF(tmp_args_element_value_19);
                        Py_DECREF(tmp_args_element_value_20);
                        Py_DECREF(tmp_args_element_value_21);
                        Py_DECREF(tmp_args_element_value_22);

                        exception_lineno = 84;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 84;
            tmp_args_element_value_23 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_23,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[78], 0)
            );

            Py_DECREF(tmp_called_instance_23);
            if (tmp_args_element_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_20);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame.f_lineno = 78;
            {
                PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1eaa6a2a11aac5a7803b495120684121_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1eaa6a2a11aac5a7803b495120684121_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1eaa6a2a11aac5a7803b495120684121_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1eaa6a2a11aac5a7803b495120684121_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1eaa6a2a11aac5a7803b495120684121_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1eaa6a2a11aac5a7803b495120684121_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_1eaa6a2a11aac5a7803b495120684121_3 == cache_frame_1eaa6a2a11aac5a7803b495120684121_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_1eaa6a2a11aac5a7803b495120684121_3);
            cache_frame_1eaa6a2a11aac5a7803b495120684121_3 = NULL;
        }

        assertFrameObject(frame_1eaa6a2a11aac5a7803b495120684121_3);

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__2_GetState_71, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[6];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_Xlib$ext$xinerama$$$class__2_GetState_71;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 71;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_24 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_Xlib$ext$xinerama$$$class__2_GetState_71);
        locals_Xlib$ext$xinerama$$$class__2_GetState_71 = NULL;
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

        Py_DECREF(locals_Xlib$ext$xinerama$$$class__2_GetState_71);
        locals_Xlib$ext$xinerama$$$class__2_GetState_71 = NULL;
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
        exception_lineno = 71;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_24);
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

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
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
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_Xlib$ext$xinerama$$$function__2_get_state();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_26);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[52]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        tmp_assign_source_27 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_27, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_28 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[53];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_18 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[45];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[53];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 94;

        goto try_except_handler_8;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[54]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_20 = tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[54]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        tmp_tuple_element_10 = mod_consts[9];
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 94;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_21 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[55]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[57];
        tmp_getattr_default_3 = mod_consts[58];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[57]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
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


            exception_lineno = 94;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 94;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_32;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_10;
        }
        if (isFrameUnusable(cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4)) {
            Py_XDECREF(cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4 = MAKE_FUNCTION_FRAME(codeobj_6ac7d5fa4a7bc29c97968c88e1180dfb, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_type_description == NULL);
        frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4 = cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_called_instance_27;
            tmp_expression_value_23 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[62]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_24 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_24 == NULL)) {
                        tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 96;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 96;
            tmp_args_element_value_24 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_24,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[64], 0)
            );

            Py_DECREF(tmp_called_instance_24);
            if (tmp_args_element_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_25 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_25 == NULL)) {
                        tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);
                        Py_DECREF(tmp_args_element_value_24);

                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 97;
            tmp_args_element_value_25 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_25,
                mod_consts[65],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_25);
            if (tmp_args_element_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_24);

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_26 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_26 == NULL)) {
                        tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);

                        exception_lineno = 98;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_26);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 98;
            tmp_args_element_value_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[67]);
            Py_DECREF(tmp_called_instance_26);
            if (tmp_args_element_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_27 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_27 == NULL)) {
                        tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_26);

                        exception_lineno = 99;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_27);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 99;
            tmp_args_element_value_27 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_27,
                mod_consts[81],
                PyTuple_GET_ITEM(mod_consts[82], 0)
            );

            Py_DECREF(tmp_called_instance_27);
            if (tmp_args_element_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_10, call_args);
            }

            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_called_instance_33;
            tmp_expression_value_24 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[62]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_28 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_28 == NULL)) {
                        tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 102;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 102;
            tmp_args_element_value_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_28, mod_consts[73]);
            Py_DECREF(tmp_called_instance_28);
            if (tmp_args_element_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);

                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_29 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_29 == NULL)) {
                        tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_args_element_value_28);

                        exception_lineno = 103;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_29);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 103;
            tmp_args_element_value_29 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_29,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[85], 0)
            );

            Py_DECREF(tmp_called_instance_29);
            if (tmp_args_element_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_28);

                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_30 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_30 == NULL)) {
                        tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_args_element_value_28);
                        Py_DECREF(tmp_args_element_value_29);

                        exception_lineno = 104;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_30);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 104;
            tmp_args_element_value_30 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_30,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            Py_DECREF(tmp_called_instance_30);
            if (tmp_args_element_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_31 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_31 == NULL)) {
                        tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_args_element_value_28);
                        Py_DECREF(tmp_args_element_value_29);
                        Py_DECREF(tmp_args_element_value_30);

                        exception_lineno = 105;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_31);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 105;
            tmp_args_element_value_31 = CALL_METHOD_NO_ARGS(tmp_called_instance_31, mod_consts[77]);
            Py_DECREF(tmp_called_instance_31);
            if (tmp_args_element_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);

                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_32 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_32 == NULL)) {
                        tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_args_element_value_28);
                        Py_DECREF(tmp_args_element_value_29);
                        Py_DECREF(tmp_args_element_value_30);
                        Py_DECREF(tmp_args_element_value_31);

                        exception_lineno = 106;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_32);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 106;
            tmp_args_element_value_32 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_32,
                mod_consts[81],
                PyTuple_GET_ITEM(mod_consts[82], 0)
            );

            Py_DECREF(tmp_called_instance_32);
            if (tmp_args_element_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);
                Py_DECREF(tmp_args_element_value_31);

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_33 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[49]);

            if (tmp_called_instance_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_33 == NULL)) {
                        tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_args_element_value_28);
                        Py_DECREF(tmp_args_element_value_29);
                        Py_DECREF(tmp_args_element_value_30);
                        Py_DECREF(tmp_args_element_value_31);
                        Py_DECREF(tmp_args_element_value_32);

                        exception_lineno = 107;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_33);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 107;
            tmp_args_element_value_33 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_33,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[78], 0)
            );

            Py_DECREF(tmp_called_instance_33);
            if (tmp_args_element_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_32);

                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame.f_lineno = 101;
            {
                PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_11, call_args);
            }

            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4 == cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4);
            cache_frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4 = NULL;
        }

        assertFrameObject(frame_6ac7d5fa4a7bc29c97968c88e1180dfb_4);

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
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_10;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[9];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 94;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_33 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94);
        locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94 = NULL;
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

        Py_DECREF(locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94);
        locals_Xlib$ext$xinerama$$$class__3_GetScreenCount_94 = NULL;
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
        exception_lineno = 94;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_33);
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
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_Xlib$ext$xinerama$$$function__3_get_screen_count();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_35);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[52]);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        tmp_assign_source_36 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_37 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_19;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[53];
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }
        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_26 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[45];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[53];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 117;

        goto try_except_handler_11;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_27 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[54]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_28 = tmp_class_creation_4__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[54]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        tmp_tuple_element_14 = mod_consts[10];
        tmp_args_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_14 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 117;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_29 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[55]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[57];
        tmp_getattr_default_4 = mod_consts[58];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[57]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
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


            exception_lineno = 117;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 117;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_41;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_13;
        }
        if (isFrameUnusable(cache_frame_546d262eede1e277dfff8a1be3d052ca_5)) {
            Py_XDECREF(cache_frame_546d262eede1e277dfff8a1be3d052ca_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_546d262eede1e277dfff8a1be3d052ca_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_546d262eede1e277dfff8a1be3d052ca_5 = MAKE_FUNCTION_FRAME(codeobj_546d262eede1e277dfff8a1be3d052ca, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_546d262eede1e277dfff8a1be3d052ca_5->m_type_description == NULL);
        frame_546d262eede1e277dfff8a1be3d052ca_5 = cache_frame_546d262eede1e277dfff8a1be3d052ca_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_546d262eede1e277dfff8a1be3d052ca_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_546d262eede1e277dfff8a1be3d052ca_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_called_instance_35;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_called_instance_38;
            tmp_expression_value_31 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[62]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_34 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_34 == NULL)) {
                        tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 119;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_34);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 119;
            tmp_args_element_value_34 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_34,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[64], 0)
            );

            Py_DECREF(tmp_called_instance_34);
            if (tmp_args_element_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_35 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_35 == NULL)) {
                        tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_args_element_value_34);

                        exception_lineno = 120;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_35);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 120;
            tmp_args_element_value_35 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_35,
                mod_consts[65],
                PyTuple_GET_ITEM(mod_consts[86], 0)
            );

            Py_DECREF(tmp_called_instance_35);
            if (tmp_args_element_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_34);

                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_36 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_36 == NULL)) {
                        tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);

                        exception_lineno = 121;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_36);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 121;
            tmp_args_element_value_36 = CALL_METHOD_NO_ARGS(tmp_called_instance_36, mod_consts[67]);
            Py_DECREF(tmp_called_instance_36);
            if (tmp_args_element_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_37 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_37 == NULL)) {
                        tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);
                        Py_DECREF(tmp_args_element_value_36);

                        exception_lineno = 122;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_37);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 122;
            tmp_args_element_value_37 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_37,
                mod_consts[81],
                PyTuple_GET_ITEM(mod_consts[82], 0)
            );

            Py_DECREF(tmp_called_instance_37);
            if (tmp_args_element_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_38 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_38 == NULL)) {
                        tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_args_element_value_34);
                        Py_DECREF(tmp_args_element_value_35);
                        Py_DECREF(tmp_args_element_value_36);
                        Py_DECREF(tmp_args_element_value_37);

                        exception_lineno = 123;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_38);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 123;
            tmp_args_element_value_38 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_38,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[88], 0)
            );

            Py_DECREF(tmp_called_instance_38);
            if (tmp_args_element_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_37);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_14, call_args);
            }

            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_called_instance_43;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_called_instance_46;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_called_instance_47;
            tmp_expression_value_32 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 125;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[62]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_39 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_39 == NULL)) {
                        tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_39);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 126;
            tmp_args_element_value_39 = CALL_METHOD_NO_ARGS(tmp_called_instance_39, mod_consts[73]);
            Py_DECREF(tmp_called_instance_39);
            if (tmp_args_element_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_40 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_40 == NULL)) {
                        tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_args_element_value_39);

                        exception_lineno = 127;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_40);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 127;
            tmp_args_element_value_40 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_40,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[74], 0)
            );

            Py_DECREF(tmp_called_instance_40);
            if (tmp_args_element_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_39);

                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_41 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_41 == NULL)) {
                        tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);

                        exception_lineno = 128;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_41);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 128;
            tmp_args_element_value_41 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_41,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            Py_DECREF(tmp_called_instance_41);
            if (tmp_args_element_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);

                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_42 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_42 == NULL)) {
                        tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);
                        Py_DECREF(tmp_args_element_value_41);

                        exception_lineno = 129;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_42);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 129;
            tmp_args_element_value_42 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_42,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[89], 0)
            );

            Py_DECREF(tmp_called_instance_42);
            if (tmp_args_element_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_41);

                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_43 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_43 == NULL)) {
                        tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);
                        Py_DECREF(tmp_args_element_value_41);
                        Py_DECREF(tmp_args_element_value_42);

                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_43);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 130;
            tmp_args_element_value_43 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_43,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[90], 0)
            );

            Py_DECREF(tmp_called_instance_43);
            if (tmp_args_element_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_41);
                Py_DECREF(tmp_args_element_value_42);

                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_44 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_44 == NULL)) {
                        tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);
                        Py_DECREF(tmp_args_element_value_41);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);

                        exception_lineno = 131;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_44);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 131;
            tmp_args_element_value_44 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_44,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[91], 0)
            );

            Py_DECREF(tmp_called_instance_44);
            if (tmp_args_element_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_41);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);

                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_45 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_45 == NULL)) {
                        tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);
                        Py_DECREF(tmp_args_element_value_41);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);

                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_45);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 132;
            tmp_args_element_value_45 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_45,
                mod_consts[81],
                PyTuple_GET_ITEM(mod_consts[82], 0)
            );

            Py_DECREF(tmp_called_instance_45);
            if (tmp_args_element_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_41);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_46 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_46 == NULL)) {
                        tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);
                        Py_DECREF(tmp_args_element_value_41);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);

                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_46);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 133;
            tmp_args_element_value_46 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_46,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[88], 0)
            );

            Py_DECREF(tmp_called_instance_46);
            if (tmp_args_element_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_41);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_47 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[49]);

            if (tmp_called_instance_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_47 == NULL)) {
                        tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);
                        Py_DECREF(tmp_args_element_value_41);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);
                        Py_DECREF(tmp_args_element_value_46);

                        exception_lineno = 134;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_47);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 134;
            tmp_args_element_value_47 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_47,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[92], 0)
            );

            Py_DECREF(tmp_called_instance_47);
            if (tmp_args_element_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_41);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_46);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame.f_lineno = 125;
            {
                PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_15, call_args);
            }

            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_546d262eede1e277dfff8a1be3d052ca_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_546d262eede1e277dfff8a1be3d052ca_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_546d262eede1e277dfff8a1be3d052ca_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_546d262eede1e277dfff8a1be3d052ca_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_546d262eede1e277dfff8a1be3d052ca_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_546d262eede1e277dfff8a1be3d052ca_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_546d262eede1e277dfff8a1be3d052ca_5 == cache_frame_546d262eede1e277dfff8a1be3d052ca_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_546d262eede1e277dfff8a1be3d052ca_5);
            cache_frame_546d262eede1e277dfff8a1be3d052ca_5 = NULL;
        }

        assertFrameObject(frame_546d262eede1e277dfff8a1be3d052ca_5);

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
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_13;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_16 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = mod_consts[10];
            tmp_args_value_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 117;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_42 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117);
        locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117 = NULL;
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

        Py_DECREF(locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117);
        locals_Xlib$ext$xinerama$$$class__4_GetScreenSize_117 = NULL;
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
        exception_lineno = 117;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_42);
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
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_Xlib$ext$xinerama$$$function__4_get_screen_size();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_44);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[52]);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        tmp_assign_source_45 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_45, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_46 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_5;
        bool tmp_condition_result_25;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        tmp_key_value_13 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[53];
        tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_metaclass_value_5 == NULL) {
            tmp_metaclass_value_5 = Py_None;
        }
        assert(!(tmp_metaclass_value_5 == NULL));
        Py_INCREF(tmp_metaclass_value_5);
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        tmp_condition_result_26 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_34 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[45];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_34, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[53];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 148;

        goto try_except_handler_14;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_35 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[54]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_36 = tmp_class_creation_5__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[54]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        tmp_tuple_element_18 = mod_consts[13];
        tmp_args_value_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_18 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 148;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_37 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_37, mod_consts[55]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[57];
        tmp_getattr_default_5 = mod_consts[58];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_38 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[57]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
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


            exception_lineno = 148;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 148;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_50;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_Xlib$ext$xinerama$$$class__5_IsActive_148 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[13];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_16;
        }
        if (isFrameUnusable(cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6)) {
            Py_XDECREF(cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6 = MAKE_FUNCTION_FRAME(codeobj_5f88af3cca2b9f57adfdeba002e7a52a, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_type_description == NULL);
        frame_5f88af3cca2b9f57adfdeba002e7a52a_6 = cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5f88af3cca2b9f57adfdeba002e7a52a_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5f88af3cca2b9f57adfdeba002e7a52a_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_called_instance_48;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_called_instance_49;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_called_instance_50;
            tmp_expression_value_39 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[62]);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_48 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_48 == NULL)) {
                        tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 150;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_48);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 150;
            tmp_args_element_value_48 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_48,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[64], 0)
            );

            Py_DECREF(tmp_called_instance_48);
            if (tmp_args_element_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_49 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_49 == NULL)) {
                        tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_args_element_value_48);

                        exception_lineno = 151;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_49);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 151;
            tmp_args_element_value_49 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_49,
                mod_consts[65],
                PyTuple_GET_ITEM(mod_consts[93], 0)
            );

            Py_DECREF(tmp_called_instance_49);
            if (tmp_args_element_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_48);

                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_50 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_50 == NULL)) {
                        tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);

                        exception_lineno = 152;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_50);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 152;
            tmp_args_element_value_50 = CALL_METHOD_NO_ARGS(tmp_called_instance_50, mod_consts[67]);
            Py_DECREF(tmp_called_instance_50);
            if (tmp_args_element_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);

                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_18, call_args);
            }

            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_called_instance_51;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_called_instance_52;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_called_instance_53;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_called_instance_54;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_called_instance_55;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_called_instance_56;
            tmp_expression_value_40 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_expression_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_40);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[62]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_51 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_51 == NULL)) {
                        tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 155;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_51);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 155;
            tmp_args_element_value_51 = CALL_METHOD_NO_ARGS(tmp_called_instance_51, mod_consts[73]);
            Py_DECREF(tmp_called_instance_51);
            if (tmp_args_element_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_52 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_52 == NULL)) {
                        tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_args_element_value_51);

                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_52);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 156;
            tmp_args_element_value_52 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_52,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[74], 0)
            );

            Py_DECREF(tmp_called_instance_52);
            if (tmp_args_element_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_51);

                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_53 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_53 == NULL)) {
                        tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);

                        exception_lineno = 157;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_53);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 157;
            tmp_args_element_value_53 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_53,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            Py_DECREF(tmp_called_instance_53);
            if (tmp_args_element_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);

                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_54 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_54 == NULL)) {
                        tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);

                        exception_lineno = 158;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_54);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 158;
            tmp_args_element_value_54 = CALL_METHOD_NO_ARGS(tmp_called_instance_54, mod_consts[77]);
            Py_DECREF(tmp_called_instance_54);
            if (tmp_args_element_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_55 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_55 == NULL)) {
                        tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);

                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_55);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 159;
            tmp_args_element_value_55 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_55,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[84], 0)
            );

            Py_DECREF(tmp_called_instance_55);
            if (tmp_args_element_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);

                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_56 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[49]);

            if (tmp_called_instance_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_56 == NULL)) {
                        tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);

                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_56);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 160;
            tmp_args_element_value_56 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_56,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[78], 0)
            );

            Py_DECREF(tmp_called_instance_56);
            if (tmp_args_element_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_19, call_args);
            }

            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);
            Py_DECREF(tmp_args_element_value_56);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5f88af3cca2b9f57adfdeba002e7a52a_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5f88af3cca2b9f57adfdeba002e7a52a_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5f88af3cca2b9f57adfdeba002e7a52a_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5f88af3cca2b9f57adfdeba002e7a52a_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5f88af3cca2b9f57adfdeba002e7a52a_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5f88af3cca2b9f57adfdeba002e7a52a_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5f88af3cca2b9f57adfdeba002e7a52a_6 == cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6);
            cache_frame_5f88af3cca2b9f57adfdeba002e7a52a_6 = NULL;
        }

        assertFrameObject(frame_5f88af3cca2b9f57adfdeba002e7a52a_6);

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
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__5_IsActive_148, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_16;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_20 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_20 = mod_consts[13];
            tmp_args_value_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_20 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_Xlib$ext$xinerama$$$class__5_IsActive_148;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 148;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_51 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_Xlib$ext$xinerama$$$class__5_IsActive_148);
        locals_Xlib$ext$xinerama$$$class__5_IsActive_148 = NULL;
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

        Py_DECREF(locals_Xlib$ext$xinerama$$$class__5_IsActive_148);
        locals_Xlib$ext$xinerama$$$class__5_IsActive_148 = NULL;
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
        exception_lineno = 148;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_51);
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
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_Xlib$ext$xinerama$$$function__5_is_active();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_53);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_41;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[52]);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        tmp_assign_source_54 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_54, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_55 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_metaclass_value_6;
        bool tmp_condition_result_31;
        PyObject *tmp_key_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        tmp_key_value_16 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_value_17 = mod_consts[53];
        tmp_metaclass_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_metaclass_value_6 == NULL) {
            tmp_metaclass_value_6 = Py_None;
        }
        assert(!(tmp_metaclass_value_6 == NULL));
        Py_INCREF(tmp_metaclass_value_6);
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        tmp_condition_result_32 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_42 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[45];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_42, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_57 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_key_value_18;
        PyObject *tmp_dict_arg_value_18;
        tmp_key_value_18 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[53];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 171;

        goto try_except_handler_17;
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_43 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_43, mod_consts[54]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_44 = tmp_class_creation_6__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[54]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        tmp_tuple_element_22 = mod_consts[16];
        tmp_args_value_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_22 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 171;
        tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_45 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_45, mod_consts[55]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[57];
        tmp_getattr_default_6 = mod_consts[58];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_46 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[57]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
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


            exception_lineno = 171;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 171;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_59;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_60;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[16];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_19;
        }
        if (isFrameUnusable(cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7)) {
            Py_XDECREF(cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7 = MAKE_FUNCTION_FRAME(codeobj_ae811ed07746e6b90cfed3ad48e4d05b, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_type_description == NULL);
        frame_ae811ed07746e6b90cfed3ad48e4d05b_7 = cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ae811ed07746e6b90cfed3ad48e4d05b_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ae811ed07746e6b90cfed3ad48e4d05b_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_called_instance_57;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_called_instance_58;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_called_instance_59;
            tmp_expression_value_47 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 172;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[62]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_57 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_57 == NULL)) {
                        tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_57);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 173;
            tmp_args_element_value_57 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_57,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[64], 0)
            );

            Py_DECREF(tmp_called_instance_57);
            if (tmp_args_element_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_58 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_58 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_58 == NULL)) {
                        tmp_called_instance_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_57);

                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_58);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 174;
            tmp_args_element_value_58 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_58,
                mod_consts[65],
                PyTuple_GET_ITEM(mod_consts[94], 0)
            );

            Py_DECREF(tmp_called_instance_58);
            if (tmp_args_element_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_57);

                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_59 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_59 == NULL)) {
                        tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_args_element_value_57);
                        Py_DECREF(tmp_args_element_value_58);

                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_59);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 175;
            tmp_args_element_value_59 = CALL_METHOD_NO_ARGS(tmp_called_instance_59, mod_consts[67]);
            Py_DECREF(tmp_called_instance_59);
            if (tmp_args_element_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);

                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 172;
            {
                PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_22, call_args);
            }

            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_59);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_called_instance_60;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_called_instance_61;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_called_instance_62;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_called_instance_63;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_called_instance_64;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_called_instance_65;
            PyObject *tmp_args_element_value_66;
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_args_element_value_67;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_expression_value_50;
            tmp_expression_value_48 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 177;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[62]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_60 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_60 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_60 == NULL)) {
                        tmp_called_instance_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 178;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_60);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 178;
            tmp_args_element_value_60 = CALL_METHOD_NO_ARGS(tmp_called_instance_60, mod_consts[73]);
            Py_DECREF(tmp_called_instance_60);
            if (tmp_args_element_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_61 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_61 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_61 == NULL)) {
                        tmp_called_instance_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_args_element_value_60);

                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_61);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 179;
            tmp_args_element_value_61 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_61,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[74], 0)
            );

            Py_DECREF(tmp_called_instance_61);
            if (tmp_args_element_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_60);

                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_62 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_62 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_62 == NULL)) {
                        tmp_called_instance_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_args_element_value_60);
                        Py_DECREF(tmp_args_element_value_61);

                        exception_lineno = 180;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_62);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 180;
            tmp_args_element_value_62 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_62,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            Py_DECREF(tmp_called_instance_62);
            if (tmp_args_element_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_60);
                Py_DECREF(tmp_args_element_value_61);

                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_63 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_63 == NULL)) {
                        tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_args_element_value_60);
                        Py_DECREF(tmp_args_element_value_61);
                        Py_DECREF(tmp_args_element_value_62);

                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_63);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 181;
            tmp_args_element_value_63 = CALL_METHOD_NO_ARGS(tmp_called_instance_63, mod_consts[77]);
            Py_DECREF(tmp_called_instance_63);
            if (tmp_args_element_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_60);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);

                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_64 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_64 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_64 == NULL)) {
                        tmp_called_instance_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_args_element_value_60);
                        Py_DECREF(tmp_args_element_value_61);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);

                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_64);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 182;
            tmp_args_element_value_64 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_64,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[95], 0)
            );

            Py_DECREF(tmp_called_instance_64);
            if (tmp_args_element_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_60);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_65 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_called_instance_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_65 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_65 == NULL)) {
                        tmp_called_instance_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_args_element_value_60);
                        Py_DECREF(tmp_args_element_value_61);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);

                        exception_lineno = 183;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_65);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 183;
            tmp_args_element_value_65 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_65,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[78], 0)
            );

            Py_DECREF(tmp_called_instance_65);
            if (tmp_args_element_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_60);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);

                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_expression_value_49 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[49]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_args_element_value_60);
                        Py_DECREF(tmp_args_element_value_61);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);

                        exception_lineno = 184;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[96]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_60);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_args_element_value_67 = mod_consts[97];
            tmp_expression_value_50 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[50]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_args_element_value_60);
                        Py_DECREF(tmp_args_element_value_61);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 184;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_args_element_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[98]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_args_element_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_60);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 184;
            {
                PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68};
                tmp_args_element_value_66 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
            }

            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_68);
            if (tmp_args_element_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_60);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame.f_lineno = 177;
            {
                PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_23, call_args);
            }

            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);
            Py_DECREF(tmp_args_element_value_65);
            Py_DECREF(tmp_args_element_value_66);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ae811ed07746e6b90cfed3ad48e4d05b_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ae811ed07746e6b90cfed3ad48e4d05b_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ae811ed07746e6b90cfed3ad48e4d05b_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ae811ed07746e6b90cfed3ad48e4d05b_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ae811ed07746e6b90cfed3ad48e4d05b_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ae811ed07746e6b90cfed3ad48e4d05b_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_ae811ed07746e6b90cfed3ad48e4d05b_7 == cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7);
            cache_frame_ae811ed07746e6b90cfed3ad48e4d05b_7 = NULL;
        }

        assertFrameObject(frame_ae811ed07746e6b90cfed3ad48e4d05b_7);

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
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_19;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_25 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_24 = mod_consts[16];
            tmp_args_value_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_24 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 171;
            tmp_assign_source_61 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_61;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_60 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_60);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171);
        locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171 = NULL;
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

        Py_DECREF(locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171);
        locals_Xlib$ext$xinerama$$$class__6_QueryScreens_171 = NULL;
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
        exception_lineno = 171;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_60);
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
    {
        PyObject *tmp_assign_source_62;


        tmp_assign_source_62 = MAKE_FUNCTION_Xlib$ext$xinerama$$$function__6_query_screens();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_62);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_51;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[52]);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        tmp_assign_source_63 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_63, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_64 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_metaclass_value_7;
        bool tmp_condition_result_37;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        tmp_key_value_19 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_value_20 = mod_consts[53];
        tmp_metaclass_value_7 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_metaclass_value_7 == NULL) {
            tmp_metaclass_value_7 = Py_None;
        }
        assert(!(tmp_metaclass_value_7 == NULL));
        Py_INCREF(tmp_metaclass_value_7);
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        tmp_condition_result_38 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_52 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[45];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_52, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_66 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        tmp_key_value_21 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[53];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 195;

        goto try_except_handler_20;
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_53 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_53, mod_consts[54]);
        tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_54 = tmp_class_creation_7__metaclass;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[54]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        tmp_tuple_element_26 = mod_consts[17];
        tmp_args_value_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_26 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 195;
        tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_67;
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_55 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_55, mod_consts[55]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[57];
        tmp_getattr_default_7 = mod_consts[58];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_56 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[57]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 195;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_68;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_Xlib$ext$xinerama$$$class__7_GetInfo_195 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[17];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_22;
        }
        if (isFrameUnusable(cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8)) {
            Py_XDECREF(cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8 = MAKE_FUNCTION_FRAME(codeobj_6de2bd953aa1f596b09a0a48b26cb6dd, module_Xlib$ext$xinerama, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_type_description == NULL);
        frame_6de2bd953aa1f596b09a0a48b26cb6dd_8 = cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6de2bd953aa1f596b09a0a48b26cb6dd_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6de2bd953aa1f596b09a0a48b26cb6dd_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_args_element_value_69;
            PyObject *tmp_called_instance_66;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_called_instance_67;
            PyObject *tmp_args_element_value_71;
            PyObject *tmp_called_instance_68;
            PyObject *tmp_args_element_value_72;
            PyObject *tmp_called_instance_69;
            tmp_expression_value_57 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[62]);
            Py_DECREF(tmp_expression_value_57);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_66 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_66 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_66 == NULL)) {
                        tmp_called_instance_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_66);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 197;
            tmp_args_element_value_69 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_66,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[64], 0)
            );

            Py_DECREF(tmp_called_instance_66);
            if (tmp_args_element_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_67 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_67 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_67 == NULL)) {
                        tmp_called_instance_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_69);

                        exception_lineno = 198;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_67);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 198;
            tmp_args_element_value_70 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_67,
                mod_consts[65],
                PyTuple_GET_ITEM(mod_consts[93], 0)
            );

            Py_DECREF(tmp_called_instance_67);
            if (tmp_args_element_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_69);

                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_68 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_68 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_68 == NULL)) {
                        tmp_called_instance_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);

                        exception_lineno = 199;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_68);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 199;
            tmp_args_element_value_71 = CALL_METHOD_NO_ARGS(tmp_called_instance_68, mod_consts[67]);
            Py_DECREF(tmp_called_instance_68);
            if (tmp_args_element_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);

                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_69 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_69 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_69 == NULL)) {
                        tmp_called_instance_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_args_element_value_71);

                        exception_lineno = 200;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_69);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 200;
            tmp_args_element_value_72 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_69,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[99], 0)
            );

            Py_DECREF(tmp_called_instance_69);
            if (tmp_args_element_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);

                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 196;
            {
                PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_27, call_args);
            }

            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_args_element_value_71);
            Py_DECREF(tmp_args_element_value_72);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_args_element_value_73;
            PyObject *tmp_called_instance_70;
            PyObject *tmp_args_element_value_74;
            PyObject *tmp_called_instance_71;
            PyObject *tmp_args_element_value_75;
            PyObject *tmp_called_instance_72;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_called_instance_73;
            PyObject *tmp_args_element_value_77;
            PyObject *tmp_called_instance_74;
            tmp_expression_value_58 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[62]);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_70 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_70 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_70 == NULL)) {
                        tmp_called_instance_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 203;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_70);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 203;
            tmp_args_element_value_73 = CALL_METHOD_NO_ARGS(tmp_called_instance_70, mod_consts[73]);
            Py_DECREF(tmp_called_instance_70);
            if (tmp_args_element_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_71 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_71 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_71 == NULL)) {
                        tmp_called_instance_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);
                        Py_DECREF(tmp_args_element_value_73);

                        exception_lineno = 204;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_71);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 204;
            tmp_args_element_value_74 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_71,
                mod_consts[70],
                PyTuple_GET_ITEM(mod_consts[74], 0)
            );

            Py_DECREF(tmp_called_instance_71);
            if (tmp_args_element_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);
                Py_DECREF(tmp_args_element_value_73);

                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_72 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_72 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_72 == NULL)) {
                        tmp_called_instance_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);
                        Py_DECREF(tmp_args_element_value_73);
                        Py_DECREF(tmp_args_element_value_74);

                        exception_lineno = 205;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_72);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 205;
            tmp_args_element_value_75 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_72,
                mod_consts[75],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            Py_DECREF(tmp_called_instance_72);
            if (tmp_args_element_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);

                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_73 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_73 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_73 == NULL)) {
                        tmp_called_instance_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);
                        Py_DECREF(tmp_args_element_value_73);
                        Py_DECREF(tmp_args_element_value_74);
                        Py_DECREF(tmp_args_element_value_75);

                        exception_lineno = 206;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_73);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 206;
            tmp_args_element_value_76 = CALL_METHOD_NO_ARGS(tmp_called_instance_73, mod_consts[77]);
            Py_DECREF(tmp_called_instance_73);
            if (tmp_args_element_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_75);

                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_74 = PyObject_GetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[49]);

            if (tmp_called_instance_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_74 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_instance_74 == NULL)) {
                        tmp_called_instance_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_instance_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);
                        Py_DECREF(tmp_args_element_value_73);
                        Py_DECREF(tmp_args_element_value_74);
                        Py_DECREF(tmp_args_element_value_75);
                        Py_DECREF(tmp_args_element_value_76);

                        exception_lineno = 207;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_74);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 207;
            tmp_args_element_value_77 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_74,
                mod_consts[81],
                PyTuple_GET_ITEM(mod_consts[82], 0)
            );

            Py_DECREF(tmp_called_instance_74);
            if (tmp_args_element_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);

                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame.f_lineno = 202;
            {
                PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_28, call_args);
            }

            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_73);
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_args_element_value_75);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6de2bd953aa1f596b09a0a48b26cb6dd_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6de2bd953aa1f596b09a0a48b26cb6dd_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6de2bd953aa1f596b09a0a48b26cb6dd_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6de2bd953aa1f596b09a0a48b26cb6dd_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6de2bd953aa1f596b09a0a48b26cb6dd_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6de2bd953aa1f596b09a0a48b26cb6dd_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6de2bd953aa1f596b09a0a48b26cb6dd_8 == cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8);
            cache_frame_6de2bd953aa1f596b09a0a48b26cb6dd_8 = NULL;
        }

        assertFrameObject(frame_6de2bd953aa1f596b09a0a48b26cb6dd_8);

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
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
        }
        branch_yes_28:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_22;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_29 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_28 = mod_consts[17];
            tmp_args_value_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_28 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_Xlib$ext$xinerama$$$class__7_GetInfo_195;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame.f_lineno = 195;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_69 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195);
        locals_Xlib$ext$xinerama$$$class__7_GetInfo_195 = NULL;
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

        Py_DECREF(locals_Xlib$ext$xinerama$$$class__7_GetInfo_195);
        locals_Xlib$ext$xinerama$$$class__7_GetInfo_195 = NULL;
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
        exception_lineno = 195;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_69);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f8e1540f3973214b5f0f99ed211a5fb);
#endif
    popFrameStack();

    assertFrameObject(frame_1f8e1540f3973214b5f0f99ed211a5fb);

    goto frame_no_exception_8;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f8e1540f3973214b5f0f99ed211a5fb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f8e1540f3973214b5f0f99ed211a5fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f8e1540f3973214b5f0f99ed211a5fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f8e1540f3973214b5f0f99ed211a5fb, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_8:;
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
    {
        PyObject *tmp_assign_source_71;


        tmp_assign_source_71 = MAKE_FUNCTION_Xlib$ext$xinerama$$$function__7_get_info();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_Xlib$ext$xinerama$$$function__8_init();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_72);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Xlib.ext.xinerama", false);

    Py_INCREF(module_Xlib$ext$xinerama);
    return module_Xlib$ext$xinerama;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$xinerama, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Xlib$ext$xinerama", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
