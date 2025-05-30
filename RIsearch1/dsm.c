/***********************************************************
  Copyright 2012 Anne Wenzel <wenzel@rth.dk>

  This file is part of RIsearch.

  RIsearch is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  RIsearch is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with RIsearch, see file COPYING.
  If not, see <http://www.gnu.org/licenses/>.

***********************************************************/




/*equals dsm for extpen=0 */
/* based on Turner 1999 parameters. */
/* Compared to RIsearch1.1, here ending with a bulge has the same cost as continuing a bulge.*/
short dsm_t99[6][6][6][6] = {\
{ \
{ {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,45,-24,-60} , {-217,-217,-107,90,-217,-285} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-45,-24,-40} },\
{ {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-60} , {-24,-24,110,-24,-24,-60} , {-217,-217,220,-217,-217,-285} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-40} },\
{ {-24,0,-24,-65,-24,-60} , {-24,0,-24,-65,-24,-60} , {-24,110,-24,45,-24,-60} , {-107,210,-217,60,-217,-285} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-45,-24,-40} },\
{ {-65,-24,-65,-24,-24,-60} , {-65,-24,-65,-24,-24,-60} , {45,-24,45,-24,-24,-60} , {110,-217,140,-147,-217,-285} , {-65,-24,-65,-24,-24,-60} , {-45,-24,-45,-24,-24,-40} },\
{ {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-217,-217,-217,-217,-217,-285} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-40} },\
{ {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-285,-285,-285,-285,-285,-45} , {-60,-60,-60,-60,-60,-2000} , {-123,-123,-123,-123,-123,-40} },\
} , {
{ {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-65,-24,-60} , {-152,-152,-42,210,-152,-240} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-45,-24,-40} },\
{ {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-60} , {-152,-152,330,-152,-152,-240} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-40} },\
{ {-24,0,-24,-65,-24,-60} , {-24,0,-24,-65,-24,-60} , {-42,240,-152,140,-152,-240} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-45,-24,-40} },\
{ {-65,-24,-65,-24,-24,-60} , {-65,-24,-65,-24,-24,-60} , {210,-152,210,-82,-152,-240} , {-65,-24,-65,-24,-24,-60} , {-65,-24,-65,-24,-24,-60} , {-45,-24,-45,-24,-24,-40} },\
{ {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-152,-152,-152,-152,-152,-240} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-40} },\
{ {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-240,-240,-240,-240,-240,0} , {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-123,-123,-123,-123,-123,-40} },\
} , {
{ {-24,-24,-24,45,-24,-60} , {-152,-152,-42,240,-152,-240} , {-24,-24,-24,-65,-24,-60} , {-217,-217,-107,130,-217,-285} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-45,-24,-40} },\
{ {-24,-24,110,-24,-24,-60} , {-152,-152,340,-152,-152,-240} , {-24,-24,0,-24,-24,-60} , {-217,-217,250,-217,-217,-285} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-40} },\
{ {-24,110,-24,45,-24,-60} , {-42,330,-152,150,-152,-240} , {-24,0,-24,-65,-24,-60} , {-107,210,-217,50,-217,-285} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-45,-24,-40} },\
{ {45,-24,45,-24,-24,-60} , {220,-152,250,-82,-152,-240} , {-65,-24,-65,-24,-24,-60} , {140,-217,-130,-147,-217,-285} , {-65,-24,-65,-24,-24,-60} , {-45,-24,-45,-24,-24,-40} },\
{ {-24,-24,-24,-24,-24,-60} , {-152,-152,-152,-152,-152,-240} , {-24,-24,-24,-24,-24,-60} , {-217,-217,-217,-217,-217,-285} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-40} },\
{ {-60,-60,-60,-60,-60,-2000} , {-240,-240,-240,-240,-240,0} , {-60,-60,-60,-60,-60,-2000} , {-285,-285,-285,-285,-285,-45} , {-60,-60,-60,-60,-60,-2000} , {-123,-123,-123,-123,-123,-40} },\
} , {
{ {-217,-217,-107,130,-217,-285} , {-24,-24,-24,-65,-24,-60} , {-217,-217,-107,100,-217,-285} , {-24,-24,-24,5,-24,-60} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-45,-24,-40} },\
{ {-217,-217,240,-217,-217,-285} , {-24,-24,0,-24,-24,-60} , {-217,-217,150,-217,-217,-285} , {-24,-24,70,-24,-24,-60} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-40} },\
{ {-107,210,-217,100,-217,-285} , {-24,0,-24,-65,-24,-60} , {-107,140,-217,-30,-217,-285} , {-24,70,-24,5,-24,-60} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-45,-24,-40} },\
{ {90,-217,130,-147,-217,-285} , {-65,-24,-65,-24,-24,-60} , {60,-217,50,-147,-217,-285} , {5,-24,5,-24,-24,-60} , {-65,-24,-65,-24,-24,-60} , {-45,-24,-45,-24,-24,-40} },\
{ {-217,-217,-217,-217,-217,-285} , {-24,-24,-24,-24,-24,-60} , {-217,-217,-217,-217,-217,-285} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-40} },\
{ {-285,-285,-285,-285,-285,-45} , {-60,-60,-60,-60,-60,-2000} , {-285,-285,-285,-285,-285,-45} , {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-123,-123,-123,-123,-123,-40} },\
} , {
{ {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-65,-24,-60} , {-24,-24,-24,-45,-24,-40} },\
{ {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-60} , {-24,-24,0,-24,-24,-40} },\
{ {-24,0,-24,-65,-24,-60} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-65,-24,-60} , {-24,0,-24,-45,-24,-40} },\
{ {-65,-24,-65,-24,-24,-60} , {-65,-24,-65,-24,-24,-60} , {-65,-24,-65,-24,-24,-60} , {-65,-24,-65,-24,-24,-60} , {-65,-24,-65,-24,-24,-60} , {-45,-24,-45,-24,-24,-40} },\
{ {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-60} , {-24,-24,-24,-24,-24,-40} },\
{ {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-60,-60,-60,-60,-60,-2000} , {-123,-123,-123,-123,-123,-40} },\
} , {
{ {-24,-24,-24,-45,-24,-123} , {-24,-24,-24,-45,-24,-123} , {-24,-24,-24,-45,-24,-123} , {-24,-24,-24,-45,-24,-123} , {-24,-24,-24,-45,-24,-123} , {0,0,0,105,0,-123} },\
{ {-24,-24,0,-24,-24,-123} , {-24,-24,0,-24,-24,-123} , {-24,-24,0,-24,-24,-123} , {-24,-24,0,-24,-24,-123} , {-24,-24,0,-24,-24,-123} , {0,0,150,0,0,-123} },\
{ {-24,0,-24,-45,-24,-123} , {-24,0,-24,-45,-24,-123} , {-24,0,-24,-45,-24,-123} , {-24,0,-24,-45,-24,-123} , {-24,0,-24,-45,-24,-123} , {0,150,0,105,0,-123} },\
{ {-45,-24,-45,-24,-24,-123} , {-45,-24,-45,-24,-24,-123} , {-45,-24,-45,-24,-24,-123} , {-45,-24,-45,-24,-24,-123} , {-45,-24,-45,-24,-24,-123} , {105,0,105,0,0,-123} },\
{ {-24,-24,-24,-24,-24,-123} , {-24,-24,-24,-24,-24,-123} , {-24,-24,-24,-24,-24,-123} , {-24,-24,-24,-24,-24,-123} , {-24,-24,-24,-24,-24,-123} , {0,0,0,0,0,-123} },\
{ {-40,-40,-40,-40,-40,-40} , {-40,-40,-40,-40,-40,-40} , {-40,-40,-40,-40,-40,-40} , {-40,-40,-40,-40,-40,-40} , {-40,-40,-40,-40,-40,-40} , {-123,-123,-123,-123,-123,-2000} },\
} };

/* based on Turner 2004 parameters */
/* Compared to RIsearch1.1, here ending with a bulge has the same cost as continuing a bulge.*/
short dsm_t04[6][6][6][6] = {{{{-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,30,-22,-71} , {-230,-230,-150,90,-230,-285} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-45,-22,-40}} ,\
 {{-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-71} , {-22,-22,100,-22,-22,-71} , {-230,-230,220,-230,-230,-285} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-40}} ,\
 {{-22,0,-22,-70,-22,-71} , {-22,0,-22,-70,-22,-71} , {-22,100,-22,30,-22,-71} , {-130,210,-110,60,-230,-285} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-45,-22,-40}} ,\
 {{-70,-22,-70,-22,-22,-71} , {-70,-22,-70,-22,-22,-71} , {30,-22,30,-22,-22,-71} , {110,-230,140,-160,-230,-285} , {-70,-22,-70,-22,-22,-71} , {-45,-22,-45,-22,-22,-40}} ,\
 {{-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-230,-230,-230,-230,-230,-285} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-40}} ,\
 {{-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-285,-285,-285,-285,-285,-45} , {-71,-71,-71,-71,-71,-2000} , {-123,-123,-123,-123,-123,-40}}\
} ,\
 {{{-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-70,-22,-71} , {-160,-160,-80,210,-160,-240} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-45,-22,-40}} ,\
 {{-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-71} , {-160,-160,330,-160,-160,-240} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-40}} ,\
 {{-22,0,-22,-70,-22,-71} , {-22,0,-22,-70,-22,-71} , {-60,240,-40,140,-160,-240} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-45,-22,-40}} ,\
 {{-70,-22,-70,-22,-22,-71} , {-70,-22,-70,-22,-22,-71} , {210,-160,210,-90,-160,-240} , {-70,-22,-70,-22,-22,-71} , {-70,-22,-70,-22,-22,-71} , {-45,-22,-45,-22,-22,-40}} ,\
 {{-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-160,-160,-160,-160,-160,-240} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-40}} ,\
 {{-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-240,-240,-240,-240,-240,0} , {-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-123,-123,-123,-123,-123,-40}}\
} ,\
 {{{-22,-22,-22,10,-22,-71} , {-160,-160,-80,240,-160,-240} , {-22,-22,-22,50,-22,-71} , {-230,-230,-150,130,-230,-285} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-45,-22,-40}} ,\
 {{-22,-22,80,-22,-22,-71} , {-160,-160,340,-160,-160,-240} , {-22,-22,120,-22,-22,-71} , {-230,-230,250,-230,-230,-285} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-40}} ,\
 {{-22,80,-22,10,-22,-71} , {-60,330,-40,150,-160,-240} , {-22,120,-22,50,-22,-71} , {-130,210,-110,50,-230,-285} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-45,-22,-40}} ,\
 {{10,-22,10,-22,-22,-71} , {220,-160,250,-90,-160,-240} , {50,-22,50,-22,-22,-71} , {140,-230,-130,-160,-230,-285} , {-70,-22,-70,-22,-22,-71} , {-45,-22,-45,-22,-22,-40}} ,\
 {{-22,-22,-22,-22,-22,-71} , {-160,-160,-160,-160,-160,-240} , {-22,-22,-22,-22,-22,-71} , {-230,-230,-230,-230,-230,-285} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-40}} ,\
 {{-71,-71,-71,-71,-71,-2000} , {-240,-240,-240,-240,-240,0} , {-71,-71,-71,-71,-71,-2000} , {-285,-285,-285,-285,-285,-45} , {-71,-71,-71,-71,-71,-2000} , {-123,-123,-123,-123,-123,-40}}\
} ,\
 {{{-230,-230,-150,130,-230,-285} , {-22,-22,-22,-70,-22,-71} , {-230,-230,-150,100,-230,-285} , {-22,-22,-22,0,-22,-71} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-45,-22,-40}} ,\
 {{-230,-230,240,-230,-230,-285} , {-22,-22,0,-22,-22,-71} , {-230,-230,150,-230,-230,-285} , {-22,-22,70,-22,-22,-71} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-40}} ,\
 {{-130,210,-110,100,-230,-285} , {-22,0,-22,-70,-22,-71} , {-130,140,-110,-30,-230,-285} , {-22,70,-22,0,-22,-71} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-45,-22,-40}} ,\
 {{90,-230,130,-160,-230,-285} , {-70,-22,-70,-22,-22,-71} , {60,-230,50,-160,-230,-285} , {0,-22,0,-22,-22,-71} , {-70,-22,-70,-22,-22,-71} , {-45,-22,-45,-22,-22,-40}} ,\
 {{-230,-230,-230,-230,-230,-285} , {-22,-22,-22,-22,-22,-71} , {-230,-230,-230,-230,-230,-285} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-40}} ,\
 {{-285,-285,-285,-285,-285,-45} , {-71,-71,-71,-71,-71,-2000} , {-285,-285,-285,-285,-285,-45} , {-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-123,-123,-123,-123,-123,-40}}\
} ,\
 {{{-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-70,-22,-71} , {-22,-22,-22,-45,-22,-40}} ,\
 {{-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-71} , {-22,-22,0,-22,-22,-40}} ,\
 {{-22,0,-22,-70,-22,-71} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-70,-22,-71} , {-22,0,-22,-45,-22,-40}} ,\
 {{-70,-22,-70,-22,-22,-71} , {-70,-22,-70,-22,-22,-71} , {-70,-22,-70,-22,-22,-71} , {-70,-22,-70,-22,-22,-71} , {-70,-22,-70,-22,-22,-71} , {-45,-22,-45,-22,-22,-40}} ,\
 {{-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-71} , {-22,-22,-22,-22,-22,-40}} ,\
 {{-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-71,-71,-71,-71,-71,-2000} , {-123,-123,-123,-123,-123,-40}}\
} ,\
 {{{-22,-22,-22,-45,-22,-123} , {-22,-22,-22,-45,-22,-123} , {-22,-22,-22,-45,-22,-123} , {-22,-22,-22,-45,-22,-123} , {-22,-22,-22,-45,-22,-123} , {0,0,0,105,0,-123}} ,\
 {{-22,-22,0,-22,-22,-123} , {-22,-22,0,-22,-22,-123} , {-22,-22,0,-22,-22,-123} , {-22,-22,0,-22,-22,-123} , {-22,-22,0,-22,-22,-123} , {0,0,150,0,0,-123}} ,\
 {{-22,0,-22,-45,-22,-123} , {-22,0,-22,-45,-22,-123} , {-22,0,-22,-45,-22,-123} , {-22,0,-22,-45,-22,-123} , {-22,0,-22,-45,-22,-123} , {0,150,0,105,0,-123}} ,\
 {{-45,-22,-45,-22,-22,-123} , {-45,-22,-45,-22,-22,-123} , {-45,-22,-45,-22,-22,-123} , {-45,-22,-45,-22,-22,-123} , {-45,-22,-45,-22,-22,-123} , {105,0,105,0,0,-123}} ,\
 {{-22,-22,-22,-22,-22,-123} , {-22,-22,-22,-22,-22,-123} , {-22,-22,-22,-22,-22,-123} , {-22,-22,-22,-22,-22,-123} , {-22,-22,-22,-22,-22,-123} , {0,0,0,0,0,-123}} ,\
 {{-40,-40,-40,-40,-40,-40} , {-40,-40,-40,-40,-40,-40} , {-40,-40,-40,-40,-40,-40} , {-40,-40,-40,-40,-40,-40} , {-40,-40,-40,-40,-40,-40} , {-123,-123,-123,-123,-123,-2000}}\
}\
} ;

/* DNA_DNA matrix based on Santa Lucia and Hicks 2004 parameters. G-T wobble is not allowed */
/* Matrix converted to RIsearch1 format from RIsearch2.1. Compared to RIsearch2.1, here ending with a bulge has the same cost as continuing a bulge.*/
short dsm_slh04_woGU_pos[6][6][6][6]= {{{{-66,-66,-66,-76,-66,-63} , {-66,-66,-66,-138,-66,-63} , {-66,-66,-66,-79,-66,-63} , {-363,-390,-316,100,-435,-282} , {-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-16}} ,\
 {{-66,-66,-17,-66,-66,-63} , {-66,-66,-47,-66,-66,-63} , {-66,-66,52,-66,-66,-63} , {-379,-435,144,-366,-435,-282} , {-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-16}} ,\
 {{-66,-43,-66,-66,-66,-63} , {-66,-79,-66,-66,-66,-63} , {-66,-11,-66,-66,-66,-63} , {-304,128,-289,-373,-435,-282} , {-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-16}} ,\
 {{-66,-66,-66,-66,-66,-63} , {-82,-66,-66,-66,-66,-63} , {-7,-66,-66,-66,-66,-63} , {88,-375,-309,-373,-435,-282} , {-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-16}} ,\
 {{-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-435,-435,-435,-435,-435,-282} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-16}} ,\
 {{-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-282,-282,-282,-282,-282,-5} , {-63,-63,-63,-63,-63,-2000} , {-123,-123,-123,-123,-123,-16}}\
} ,\
 {{{-66,-66,-66,-97,-66,-63} , {-66,-66,-66,-110,-66,-63} , {-340,-372,-300,145,-395,-277} , {-66,-66,-66,-80,-66,-63} , {-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-16}} ,\
 {{-66,-66,-81,-66,-66,-63} , {-66,-66,-79,-66,-66,-63} , {-376,-367,184,-359,-395,-277} , {-66,-66,-98,-66,-66,-63} , {-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-16}} ,\
 {{-66,-75,-66,-66,-66,-63} , {-66,-70,-66,-66,-66,-63} , {-308,217,-286,-250,-395,-277} , {-66,-40,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-16}} ,\
 {{-93,-66,-66,-66,-66,-63} , {-138,-66,-66,-66,-66,-63} , {128,-337,-265,-285,-395,-277} , {-78,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-16}} ,\
 {{-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-395,-395,-395,-395,-395,-277} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-16}} ,\
 {{-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-277,-277,-277,-277,-277,0} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-123,-123,-123,-123,-123,-16}}\
} ,\
 {{{-66,-66,-66,-47,-66,-63} , {-314,-378,-272,130,-395,-277} , {-66,-66,-66,-49,-66,-63} , {-66,-66,-66,-39,-66,-63} , {-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-16}} ,\
 {{-66,-66,25,-66,-66,-63} , {-344,-376,224,-359,-395,-277} , {-66,-66,111,-66,-66,-63} , {-66,-66,59,-66,-66,-63} , {-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-16}} ,\
 {{-66,-3,-66,-66,-66,-63} , {-245,184,-186,-305,-395,-277} , {-66,11,-66,-66,-66,-63} , {-66,32,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-16}} ,\
 {{-19,-66,-66,-66,-66,-63} , {144,-395,-238,-342,-395,-277} , {8,-66,-66,-66,-66,-63} , {-12,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-16}} ,\
 {{-66,-66,-66,-66,-66,-63} , {-395,-395,-395,-395,-395,-277} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-16}} ,\
 {{-63,-63,-63,-63,-63,-2000} , {-277,-277,-277,-277,-277,0} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-123,-123,-123,-123,-123,-16}}\
} ,\
 {{{-373,-394,-344,58,-435,-282} , {-66,-66,-66,-102,-66,-63} , {-66,-66,-66,-48,-66,-63} , {-66,-66,-66,-73,-66,-63} , {-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-16}} ,\
 {{-435,-407,130,-399,-435,-282} , {-66,-66,-62,-66,-66,-63} , {-66,-66,-8,-66,-66,-63} , {-66,-66,-45,-66,-66,-63} , {-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-16}} ,\
 {{-376,145,-346,-345,-435,-282} , {-66,-62,-66,-66,-66,-63} , {-66,47,-66,-66,-66,-63} , {-66,12,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-16}} ,\
 {{100,-377,-336,-370,-435,-282} , {-69,-66,-66,-66,-66,-63} , {-76,-66,-66,-66,-66,-63} , {-76,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-16}} ,\
 {{-435,-435,-435,-435,-435,-282} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-16}} ,\
 {{-282,-282,-282,-282,-282,-5} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-123,-123,-123,-123,-123,-16}}\
} ,\
 {{{-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-63} , {-66,-66,-66,-5,-66,-16}} ,\
 {{-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-63} , {-66,-66,0,-66,-66,-16}} ,\
 {{-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-63} , {-66,0,-66,-66,-66,-16}} ,\
 {{-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-63} , {-5,-66,-66,-66,-66,-16}} ,\
 {{-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-63} , {-66,-66,-66,-66,-66,-16}} ,\
 {{-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-63,-63,-63,-63,-63,-2000} , {-123,-123,-123,-123,-123,-16}}\
} ,\
 {{{-66,-66,-66,-5,-66,-123} , {-66,-66,-66,-5,-66,-123} , {-66,-66,-66,-5,-66,-123} , {-66,-66,-66,-5,-66,-123} , {-66,-66,-66,-5,-66,-123} , {0,0,0,358,0,-123}} ,\
 {{-66,-66,0,-66,-66,-123} , {-66,-66,0,-66,-66,-123} , {-66,-66,0,-66,-66,-123} , {-66,-66,0,-66,-66,-123} , {-66,-66,0,-66,-66,-123} , {0,0,363,0,0,-123}} ,\
 {{-66,0,-66,-66,-66,-123} , {-66,0,-66,-66,-66,-123} , {-66,0,-66,-66,-66,-123} , {-66,0,-66,-66,-66,-123} , {-66,0,-66,-66,-66,-123} , {0,363,0,0,0,-123}} ,\
 {{-5,-66,-66,-66,-66,-123} , {-5,-66,-66,-66,-66,-123} , {-5,-66,-66,-66,-66,-123} , {-5,-66,-66,-66,-66,-123} , {-5,-66,-66,-66,-66,-123} , {358,0,0,0,0,-123}} ,\
 {{-66,-66,-66,-66,-66,-123} , {-66,-66,-66,-66,-66,-123} , {-66,-66,-66,-66,-66,-123} , {-66,-66,-66,-66,-66,-123} , {-66,-66,-66,-66,-66,-123} , {0,0,0,0,0,-123}} ,\
 {{-16,-16,-16,-16,-16,-16} , {-16,-16,-16,-16,-16,-16} , {-16,-16,-16,-16,-16,-16} , {-16,-16,-16,-16,-16,-16} , {-16,-16,-16,-16,-16,-16} , {-123,-123,-123,-123,-123,-2000}}\
}\
};
/* RNA_DNA matrix based on Sugimoto 95 stacking parameter. Bulges and internal loops are estimated as the mean of t04 and slh04 initiation or extension parameters. G-U wobble is allowed.*/
/* Matrix converted to RIsearch1 format from RIsearch2.1. Compared to RIsearch2.1, here ending with a bulge has the same cost as continuing a bulge.*/
short dsm_su95_rev_wGU_pos[6][6][6][6]= {
{{{-44,-44,-44,-61,-44,-67} , {-44,-44,-44,-91,-44,-67} , {-44,-44,-44,-12,-44,-67} , {-283,-297,-220,100,-319,-283} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-44,-44,-8,-44,-44,-67} , {-44,-44,-24,-44,-44,-67} , {-44,-44,76,-44,-44,-67} , {-291,-319,210,-285,-319,-283} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-44,-22,-44,-47,-44,-67} , {-44,-40,-44,-47,-44,-67} , {-44,44,-44,3,-44,-67} , {-204,180,-187,-8,-319,-283} , {-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-28}} ,\
 {{-55,-44,-47,-44,-44,-67} , {-63,-44,-47,-44,-44,-67} , {24,-44,3,-44,-44,-67} , {90,-289,64,-253,-319,-283} , {-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-28}} ,\
 {{-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-319,-319,-319,-319,-319,-283} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-283,-283,-283,-283,-283,-25} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-44,-44,-44,-71,-44,-67} , {-44,-44,-44,-77,-44,-67} , {-250,-266,-190,90,-268,-258} , {-44,-44,-44,-63,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-44,-44,-40,-44,-44,-67} , {-44,-44,-40,-44,-44,-67} , {-268,-263,210,-259,-268,-258} , {-44,-44,-49,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-44,-38,-44,-47,-44,-67} , {-44,-35,-44,-47,-44,-67} , {-184,170,-162,94,-268,-258} , {-44,-20,-44,-47,-44,-67} , {-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-28}} ,\
 {{-69,-44,-47,-44,-44,-67} , {-91,-44,-47,-44,-44,-67} , {90,-248,122,-187,-268,-258} , {-61,-44,-47,-44,-44,-67} , {-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-28}} ,\
 {{-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-268,-268,-268,-268,-268,-258} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-258,-258,-258,-258,-258,0} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-44,-44,-44,-6,-44,-67} , {-236,-268,-176,130,-277,-258} , {-44,-44,-44,13,-44,-67} , {-275,-275,-235,46,-319,-283} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-44,-44,52,-44,-44,-67} , {-252,-268,270,-259,-277,-258} , {-44,-44,116,-44,-44,-67} , {-275,-275,155,-275,-319,-283} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-44,38,-44,-7,-44,-67} , {-152,290,-112,72,-277,-258} , {-44,66,-44,13,-44,-67} , {-225,122,-215,-12,-319,-283} , {-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-28}} ,\
 {{8,-44,-7,-44,-44,-67} , {110,-277,155,-216,-277,-258} , {41,-44,13,-44,-44,-67} , {64,-275,-122,-275,-319,-283} , {-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-28}} ,\
 {{-44,-44,-44,-44,-44,-67} , {-277,-277,-277,-277,-277,-258} , {-44,-44,-44,-44,-44,-67} , {-277,-277,-277,-277,-277,-283} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-67,-67,-67,-67,-67,-2000} , {-258,-258,-258,-258,-258,0} , {-67,-67,-67,-67,-67,-2000} , {-283,-283,-283,-283,-283,-25} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-289,-299,-234,60,-319,-283} , {-44,-44,-44,-73,-44,-67} , {-275,-275,-235,28,-268,-283} , {-44,-44,-44,-24,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-319,-305,150,-301,-319,-283} , {-44,-44,-31,-44,-44,-67} , {-275,-275,72,-275,-268,-283} , {-44,-44,12,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-240,160,-215,28,-319,-283} , {-44,-31,-44,-47,-44,-67} , {-225,94,-215,-41,-268,-283} , {-44,41,-44,-47,-44,-67} , {-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-28}} ,\
 {{20,-291,46,-252,-319,-283} , {-57,-44,-47,-44,-44,-67} , {-8,-275,-12,-275,-268,-283} , {-25,-44,-47,-44,-44,-67} , {-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-28}} ,\
 {{-319,-319,-319,-319,-319,-283} , {-44,-44,-44,-44,-44,-67} , {-319,-319,-319,-319,-319,-283} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-283,-283,-283,-283,-283,-25} , {-67,-67,-67,-67,-67,-2000} , {-283,-283,-283,-283,-283,-25} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-67} , {-44,0,-44,-25,-44,-28}} ,\
 {{-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-67} , {-25,-44,-25,-44,-44,-28}} ,\
 {{-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-44,-44,-44,-25,-44,-123} , {-44,-44,-44,-25,-44,-123} , {-44,-44,-44,-25,-44,-123} , {-44,-44,-44,-25,-44,-123} , {-44,-44,-44,-25,-44,-123} , {0,0,0,224,0,-123}} ,\
 {{-44,-44,0,-44,-44,-123} , {-44,-44,0,-44,-44,-123} , {-44,-44,0,-44,-44,-123} , {-44,-44,0,-44,-44,-123} , {-44,-44,0,-44,-44,-123} , {0,0,249,0,0,-123}} ,\
 {{-44,0,-44,-25,-44,-123} , {-44,0,-44,-25,-44,-123} , {-44,0,-44,-25,-44,-123} , {-44,0,-44,-25,-44,-123} , {-44,0,-44,-25,-44,-123} , {0,249,0,224,0,-123}} ,\
 {{-25,-44,-25,-44,-44,-123} , {-25,-44,-25,-44,-44,-123} , {-25,-44,-25,-44,-44,-123} , {-25,-44,-25,-44,-44,-123} , {-25,-44,-25,-44,-44,-123} , {224,0,224,0,0,-123}} ,\
 {{-44,-44,-44,-44,-44,-123} , {-44,-44,-44,-44,-44,-123} , {-44,-44,-44,-44,-44,-123} , {-44,-44,-44,-44,-44,-123} , {-44,-44,-44,-44,-44,-123} , {0,0,0,0,0,-123}} ,\
 {{-28,-28,-28,-28,-28,-28} , {-28,-28,-28,-28,-28,-28} , {-28,-28,-28,-28,-28,-28} , {-28,-28,-28,-28,-28,-28} , {-28,-28,-28,-28,-28,-28} , {-123,-123,-123,-123,-123,-2000}}\
}\
};

/* RNA_DNA matrix based on Sugimoto 95 stacking parameter. Bulges and internal loops are estimated as the mean of t04 and slh04 initiation or extension parameters. G-U wobble is not allowed in the seed */
/* Matrix converted to RIsearch1 format from RIsearch2.1. Compared to RIsearch2.1, here ending with a bulge has the same cost as continuing a bulge.*/
short dsm_su95_rev_woGU_pos[6][6][6][6]={{{{-44,-44,-44,-61,-44,-67} , {-44,-44,-44,-91,-44,-67} , {-44,-44,-44,-12,-44,-67} , {-283,-297,-220,100,-319,-283} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-44,-44,-8,-44,-44,-67} , {-44,-44,-24,-44,-44,-67} , {-44,-44,76,-44,-44,-67} , {-291,-319,210,-285,-319,-283} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-44,-22,-44,-44,-44,-67} , {-44,-40,-44,-44,-44,-67} , {-44,44,-44,-44,-44,-67} , {-204,180,-187,-261,-319,-283} , {-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-28}} ,\
 {{-55,-44,-44,-44,-44,-67} , {-63,-44,-44,-44,-44,-67} , {24,-44,-44,-44,-44,-67} , {90,-289,-189,-253,-319,-283} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-28}} ,\
 {{-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-319,-319,-319,-319,-319,-283} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-283,-283,-283,-283,-283,-25} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-44,-44,-44,-71,-44,-67} , {-44,-44,-44,-77,-44,-67} , {-250,-266,-190,90,-268,-258} , {-44,-44,-44,-63,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-44,-44,-40,-44,-44,-67} , {-44,-44,-40,-44,-44,-67} , {-268,-263,210,-259,-268,-258} , {-44,-44,-49,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-44,-38,-44,-44,-44,-67} , {-44,-35,-44,-44,-44,-67} , {-184,170,-162,-134,-268,-258} , {-44,-20,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-28}} ,\
 {{-69,-44,-44,-44,-44,-67} , {-91,-44,-44,-44,-44,-67} , {90,-248,-106,-187,-268,-258} , {-61,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-28}} ,\
 {{-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-268,-268,-268,-268,-268,-258} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-258,-258,-258,-258,-258,0} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-44,-44,-44,-6,-44,-67} , {-236,-268,-176,130,-277,-258} , {-44,-44,-44,13,-44,-67} , {-44,-44,-44,21,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-44,-44,52,-44,-44,-67} , {-252,-268,270,-259,-277,-258} , {-44,-44,116,-44,-44,-67} , {-44,-44,155,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-44,38,-44,-44,-44,-67} , {-152,290,-112,-156,-277,-258} , {-44,66,-44,-44,-44,-67} , {-44,122,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-28}} ,\
 {{8,-44,-44,-44,-44,-67} , {110,-277,-73,-216,-277,-258} , {41,-44,-44,-44,-44,-67} , {39,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-28}} ,\
 {{-44,-44,-44,-44,-44,-67} , {-277,-277,-277,-277,-277,-258} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-67,-67,-67,-67,-67,-2000} , {-258,-258,-258,-258,-258,0} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-289,-299,-234,60,-319,-283} , {-44,-44,-44,-73,-44,-67} , {-44,-44,-44,3,-44,-67} , {-44,-44,-44,-24,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-319,-305,150,-301,-319,-283} , {-44,-44,-31,-44,-44,-67} , {-44,-44,72,-44,-44,-67} , {-44,-44,12,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-240,160,-215,-225,-319,-283} , {-44,-31,-44,-44,-44,-67} , {-44,94,-44,-44,-44,-67} , {-44,41,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-28}} ,\
 {{20,-291,-207,-252,-319,-283} , {-57,-44,-44,-44,-44,-67} , {-33,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-28}} ,\
 {{-319,-319,-319,-319,-319,-283} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-283,-283,-283,-283,-283,-25} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-67} , {-44,-44,-44,-25,-44,-28}} ,\
 {{-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-67} , {-44,-44,0,-44,-44,-28}} ,\
 {{-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-67} , {-44,0,-44,-44,-44,-28}} ,\
 {{-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-67} , {-25,-44,-44,-44,-44,-28}} ,\
 {{-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-67} , {-44,-44,-44,-44,-44,-28}} ,\
 {{-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-67,-67,-67,-67,-67,-2000} , {-123,-123,-123,-123,-123,-28}}\
} ,\
 {{{-44,-44,-44,-25,-44,-123} , {-44,-44,-44,-25,-44,-123} , {-44,-44,-44,-25,-44,-123} , {-44,-44,-44,-25,-44,-123} , {-44,-44,-44,-25,-44,-123} , {0,0,0,224,0,-123}} ,\
 {{-44,-44,0,-44,-44,-123} , {-44,-44,0,-44,-44,-123} , {-44,-44,0,-44,-44,-123} , {-44,-44,0,-44,-44,-123} , {-44,-44,0,-44,-44,-123} , {0,0,249,0,0,-123}} ,\
 {{-44,0,-44,-44,-44,-123} , {-44,0,-44,-44,-44,-123} , {-44,0,-44,-44,-44,-123} , {-44,0,-44,-44,-44,-123} , {-44,0,-44,-44,-44,-123} , {0,249,0,0,0,-123}} ,\
 {{-25,-44,-44,-44,-44,-123} , {-25,-44,-44,-44,-44,-123} , {-25,-44,-44,-44,-44,-123} , {-25,-44,-44,-44,-44,-123} , {-25,-44,-44,-44,-44,-123} , {224,0,0,0,0,-123}} ,\
 {{-44,-44,-44,-44,-44,-123} , {-44,-44,-44,-44,-44,-123} , {-44,-44,-44,-44,-44,-123} , {-44,-44,-44,-44,-44,-123} , {-44,-44,-44,-44,-44,-123} , {0,0,0,0,0,-123}} ,\
 {{-28,-28,-28,-28,-28,-28} , {-28,-28,-28,-28,-28,-28} , {-28,-28,-28,-28,-28,-28} , {-28,-28,-28,-28,-28,-28} , {-28,-28,-28,-28,-28,-28} , {-123,-123,-123,-123,-123,-2000}}\
}\
};

/*#nt added, to be multiplied by extpen */
short dsm_extend[6][6][6][6] = {\
{ \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} }, \
} , {
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} }, \
} , {
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} }, \
} , {
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} }, \
} , {
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} }, \
{ {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} }, \
} , {
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {0,0,0,2,0,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {0,0,2,0,0,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {0,2,0,2,0,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,0,2,0,0,1} }, \
{ {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {2,2,2,2,2,1} , {0,0,0,0,0,1} }, \
{ {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} , {1,1,1,1,1,0} } \
} };


short modified_dsm[6][6][6][6] = {0};


short modified_dsm_extend[6][6][6][6] ={0};

