/**
 * Author: chilli
 * License: CC0
 * Description: Hàm Z-algorithm tính độ dài tiền tố chung dài nhất giữa chuỗi s và các hậu tố của nó.


 * Time: O(n)
 * Status: stress-tested
 */
#pragma once

vi Z(const string& S) {
	vi z(sz(S));
	int l = -1, r = -1;
	rep(i,1,sz(S)) {
		z[i] = i >= r ? 0 : min(r - i, z[i - l]);
		while (i + z[i] < sz(S) && S[i + z[i]] == S[z[i]])
			z[i]++;
		if (i + z[i] > r)
			l = i, r = i + z[i];
	}
	return z;
}
