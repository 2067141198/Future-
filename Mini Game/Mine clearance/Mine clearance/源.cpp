#define _CRT_SECURE_NO_WARNINGS 1


//if (row == 0, col >= 0 && col < MAX_COL){
//	UpdateShowMap(show_map, mine_map, row, col - 1);
//	UpdateShowMap(show_map, mine_map, row, col + 1);
//	UpdateShowMap(show_map, mine_map, row + 1, col - 1);
//	UpdateShowMap(show_map, mine_map, row + 1, col);
//	UpdateShowMap(show_map, mine_map, row + 1, col + 1);
//}
//if (row == MAX_ROW, col >= 0 && col < MAX_COL){
//	UpdateShowMap(show_map, mine_map, row - 1, col - 1);
//	UpdateShowMap(show_map, mine_map, row - 1, col);
//	UpdateShowMap(show_map, mine_map, row - 1, col + 1);
//	UpdateShowMap(show_map, mine_map, row, col - 1);
//	UpdateShowMap(show_map, mine_map, row, col + 1);
//}
//if (row >= 0 && row < MAX_ROW, col == 0){
//	UpdateShowMap(show_map, mine_map, row - 1, col);
//	UpdateShowMap(show_map, mine_map, row - 1, col + 1);
//	UpdateShowMap(show_map, mine_map, row, col + 1);
//	UpdateShowMap(show_map, mine_map, row + 1, col);
//	UpdateShowMap(show_map, mine_map, row + 1, col + 1);
//}
//if (row >= 0 && row < MAX_ROW, col == MAX_COL){
//	UpdateShowMap(show_map, mine_map, row - 1, col - 1);
//	UpdateShowMap(show_map, mine_map, row - 1, col);
//	UpdateShowMap(show_map, mine_map, row, col - 1);
//	UpdateShowMap(show_map, mine_map, row + 1, col - 1);
//	UpdateShowMap(show_map, mine_map, row + 1, col);
//}
//else{
//	UpdateShowMap(show_map, mine_map, row - 1, col - 1);
//	UpdateShowMap(show_map, mine_map, row - 1, col + 1);
	//UpdateShowMap(show_map, mine_map, row + 1, col - 1);
	//UpdateShowMap(show_map, mine_map, row + 1, col + 1);
//}

//UpdateShowMap(show_map, mine_map, row - 1, col);
//UpdateShowMap(show_map, mine_map, row, col - 1);
//UpdateShowMap(show_map, mine_map, row, col + 1);
//UpdateShowMap(show_map, mine_map, row + 1, col);