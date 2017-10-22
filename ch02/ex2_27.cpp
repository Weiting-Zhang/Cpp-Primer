int main() {
	int i = -1, &r = 0;         // illegal, r must refer to an object.
	// int i2;
	// int *const p2 = &i2;        // legal.
	const int j = -1, &s = 0;   // legal.
	// const int *const p3 = &i2;  // legal.
	// const int *p1 = &i2;        // legal
	// const int &const r2;        // illegal, r2 is a reference that cannot be const.
	// const int i2 = i, &r = i;   // legal.
}
