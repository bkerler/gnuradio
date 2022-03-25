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
/* BINDTOOL_HEADER_FILE(sccc_decoder_combined_blk.h) */
/* BINDTOOL_HEADER_FILE_HASH(14dd8487d8cc55c93644aacf4ce2d0d2)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/trellis/sccc_decoder_combined_blk.h>
// pydoc.h is automatically generated in the build directory
#include <sccc_decoder_combined_blk_pydoc.h>

template <class IN_T, class OUT_T>
void bind_sccc_decoder_combined_blk_template(py::module& m, const char* classname)
{
   using sccc_decoder_combined_blk = gr::trellis::sccc_decoder_combined_blk<IN_T, OUT_T>;

   py::class_<sccc_decoder_combined_blk,
              gr::block,
              gr::basic_block,
              std::shared_ptr<sccc_decoder_combined_blk>>(m, classname)
       .def(py::init(&gr::trellis::sccc_decoder_combined_blk<IN_T, OUT_T>::make),
            py::arg("FSMo"),
            py::arg("STo0"),
            py::arg("SToK"),
            py::arg("FSMi"),
            py::arg("STi0"),
            py::arg("STiK"),
            py::arg("INTERLEAVER"),
            py::arg("blocklength"),
            py::arg("repetitions"),
            py::arg("SISO_TYPE"),
            py::arg("D"),
            py::arg("TABLE"),
            py::arg("METRIC_TYPE"),
            py::arg("scaling"))
       .def("FSMo", &sccc_decoder_combined_blk::FSMo)
       .def("STo0", &sccc_decoder_combined_blk::STo0)
       .def("SToK", &sccc_decoder_combined_blk::SToK)
       .def("FSMi", &sccc_decoder_combined_blk::FSMi)
       .def("STi0", &sccc_decoder_combined_blk::STi0)
       .def("STiK", &sccc_decoder_combined_blk::STiK)
       .def("INTERLEAVER", &sccc_decoder_combined_blk::INTERLEAVER)
       .def("blocklength", &sccc_decoder_combined_blk::blocklength)
       .def("repetitions", &sccc_decoder_combined_blk::repetitions)
       .def("SISO_TYPE", &sccc_decoder_combined_blk::SISO_TYPE)
       .def("D", &sccc_decoder_combined_blk::D)
       .def("TABLE", &sccc_decoder_combined_blk::TABLE)
       .def("METRIC_TYPE", &sccc_decoder_combined_blk::METRIC_TYPE)
       .def("scaling", &sccc_decoder_combined_blk::scaling);
}

void bind_sccc_decoder_combined_blk(py::module& m)
{
   bind_sccc_decoder_combined_blk_template<float, std::uint8_t>(m, "sccc_decoder_combined_fb");
   bind_sccc_decoder_combined_blk_template<float, std::int16_t>(m, "sccc_decoder_combined_fs");
   bind_sccc_decoder_combined_blk_template<float, std::int32_t>(m, "sccc_decoder_combined_fi");
   bind_sccc_decoder_combined_blk_template<gr_complex, std::uint8_t>(m, "sccc_decoder_combined_cb");
   bind_sccc_decoder_combined_blk_template<gr_complex, std::int16_t>(m, "sccc_decoder_combined_cs");
   bind_sccc_decoder_combined_blk_template<gr_complex, std::int32_t>(m, "sccc_decoder_combined_ci");
}
