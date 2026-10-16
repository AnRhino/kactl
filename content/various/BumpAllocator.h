/**
 * Author: Simon Lindholm
 * Date: 2015-09-12
 * License: CC0
 * Source: me
 * Description: Bộ cấp phát bộ nhớ tùy biến tốc độ cao cho cây và con trỏ, bỏ qua giải phóng bộ nhớ để đạt hiệu năng tối đa.


 * Status: tested
 */
#pragma once

// Either globally or in a single class:
static char buf[450 << 20];
void* operator new(size_t s) {
	static size_t i = sizeof buf;
	assert(s < i);
	return (void*)&buf[i -= s];
}
void operator delete(void*) {}
