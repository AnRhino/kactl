/**
 * Author: Simon Lindholm
 * License: CC0
 * Source: http://codeforces.com/blog/entry/8219
 * Description: Tối ưu Knuth cho quy hoạch động dạng $dp[i][j] = \min_k (dp[i][k] + dp[k][j]) + C[i][j]$ từ $O(N^3)$ xuống $O(N^2)$.


 * Time: O(N^2)
 */
