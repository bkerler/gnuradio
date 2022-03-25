/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(sccc_decoder_blk.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(f419e16a4ec7e5edffaab1b98edaeaa8)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/trellis/sccc_decoder_blk.h>
// pydoc.h is automatically generated in the build directory
#include <sccc_decoder_blk_pydoc.h>

template <class T>
void bind_sccc_decoder_blk_template(py::module& m, const char* classname)
{
    using sccc_decoder_blk = gr::trellis::sccc_decoder_blk<T>;

    py::class_<sccc_decoder_blk,
               gr::block,
               gr::basic_block,
               std::shared_ptr<sccc_decoder_blk>>(m, classname)
        .def(py::init(&gr::trellis::sccc_decoder_blk<T>::make),
             py::arg("FSMo"),
             py::arg("FSMi"),
             py::arg("STo0"),
             py::arg("SToK"),
             py::arg("STi0"),
             py::arg("STiK"),
             py::arg("INTERLEAVER"),
             py::arg("blocklength"),
             py::arg("repetitions"),
             py::arg("SISO_TYPE"))
        .def("FSMo", &sccc_decoder_blk::FSMo)
        .def("FSMi", &sccc_decoder_blk::FSMi)
        .def("STo0", &sccc_decoder_blk::STo0)
        .def("SToK", &sccc_decoder_blk::SToK)
        .def("STi0", &sccc_decoder_blk::STi0)
        .def("STiK", &sccc_decoder_blk::STiK)
        .def("INTERLEAVER", &sccc_decoder_blk::INTERLEAVER)
        .def("blocklength", &sccc_decoder_blk::blocklength)
        .def("repetitions", &sccc_decoder_blk::repetitions)
        .def("SISO_TYPE", &sccc_decoder_blk::SISO_TYPE);
}

void bind_sccc_decoder_blk(py::module& m)
{
    bind_sccc_decoder_blk_template<std::uint8_t>(m, "sccc_decoder_b");
    bind_sccc_decoder_blk_template<std::int16_t>(m, "sccc_decoder_s");
    bind_sccc_decoder_blk_template<std::int32_t>(m, "sccc_decoder_i");
}