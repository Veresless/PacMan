#ifndef H_MAP_CONSTANTS
#define H_MAP_CONSTANTS
#include <string>
const bool SPRITE_EMPTY[] = {		0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0 };

const bool WALL_VERTICAL[] = {		0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0 };

const bool WALL_HORIZONTAL[] = {	0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									1, 1, 1, 1, 1, 1, 1, 1,
									1, 1, 1, 1, 1, 1, 1, 1,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0 };

const bool WALL_LEFT_BOTTOM[] = {	0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									1, 1, 1, 1, 0, 0, 0, 0,
									1, 1, 1, 1, 1, 0, 0, 0,
									0, 0, 1, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0 };

const bool WALL_RIGHT_BOTTOM[] = {	0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 1, 1, 1, 1,
									0, 0, 0, 1, 1, 1, 1, 1,
									0, 0, 0, 1, 1, 1, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0 };

const bool WALL_LEFT_TOP[] = {		0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 1, 1, 1, 0, 0, 0,
									1, 1, 1, 1, 1, 0, 0, 0,
									1, 1, 1, 1, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0 };

const bool WALL_RIGHT_TOP[] = {		0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 1, 0, 0,
									0, 0, 0, 1, 1, 1, 1, 1,
									0, 0, 0, 0, 1, 1, 1, 1,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0 };

const bool PAC_MAN[] = {			0, 0, 0, 1, 1, 0, 0, 0,
									0, 1, 1, 1, 1, 1, 1, 0,
									0, 1, 0, 1, 1, 0, 1, 0,
									1, 1, 0, 1, 1, 0, 1, 1,
									1, 1, 1, 1, 1, 1, 1, 1,
									0, 1, 0, 1, 1, 0, 1, 0,
									0, 1, 1, 0, 0, 1, 1, 0,
									0, 0, 0, 1, 1, 0, 0, 0 };

const bool SPRITE_SCHORE_POINT[] ={	0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0 };

const bool SPRITE_ENERGISER[] = {	0, 0, 0, 0, 0, 0, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 1, 1, 1, 1, 0, 0,
									0, 1, 1, 1, 1, 1, 1, 0,
									0, 1, 1, 1, 1, 1, 1, 0,
									0, 0, 1, 1, 1, 1, 0, 0,
									0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 0, 0, 0, 0, 0, 0 };

const bool SPRITE_GOST[] = {		0, 0, 0, 1, 1, 0, 0, 0,
									0, 0, 1, 1, 1, 1, 0, 0,
									0, 1, 1, 1, 1, 1, 1, 0,
									0, 1, 1, 1, 1, 1, 1, 0,
									1, 1, 1, 1, 1, 1, 1, 1,
									1, 1, 1, 1, 1, 1, 1, 1,
									1, 1, 1, 1, 1, 1, 1, 1,
									1, 0, 1, 1, 0, 1, 0, 1 };
const std::string MAP[] = {
					"                            ",
					"                            ",
					"                            ",
					"F------------TF------------T",
					"|............||............|",
					"|.F--T.F---T.||.F---T.F--T.|",
					"|O|  |.|   |.||.|   |.|  |O|",
					"|.L--J.L---J.LJ.L---J.L--J.|",
					"|..........................|",
					"|.F--T.FT.F------T.FT.F--T.|",
					"|.L--J.||.L--TF--J.||.L--J.|",
					"|......||....||....||......|",
					"L----T.|L--T || F--J|.F----J",
					"     |.|F--J LJ L--T|.|     ",
					"     |.||          ||.|     ",
					"     |.|| F--==--T ||.|     ",
					"-----J.LJ |      | LJ.L-----",
					"      .   |      |   .      ",
					"-----T.FT |      | FT.F-----",
					"     |.|| L------J ||.|     ",
					"     |.||          ||.|     ",
					"     |.|| F------T ||.|     ",
					"F----J.LJ L--TF--J LJ.L----T",
					"|............||............|",
					"|.F--T.F---T.||.F---T.F--T.|",
					"|.L-T|.L---J.LJ.L---J.|F-J.|",
					"|O..||.......  .......||..O|",
					"L-T.||.FT.F------T.FT.||.F-J",
					"F-J.LJ.||.L--TF--J.||.LJ.L-T",
					"|......||....||....||......|",
					"|.F----JL--T.||.F--JL----T.|",
					"|.L--------J.LJ.L--------J.|",
					"|..........................|",
					"L--------------------------J",
					"                            ",
					"                            " };
#endif