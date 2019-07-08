void main(void) {
	int x,y;
	switch (x) {
		case 1:
			y=x+1;
		case 2:
		case 3:
		case 4:
			y++;
		case 5:
			y--;
		default:
			y=0;
	}
}
