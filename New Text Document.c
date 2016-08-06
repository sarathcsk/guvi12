#include <stdio.h>
+unsigned reduce(unsigned num, unsigned k) {
+  if (k <= 0) {
+    return num;  // Success
+  }
+  if (num == 0) {
+    return 10;  // Fail
+  }
+  unsigned path1 = reduce(num/10, k)*10 + num%10;
+  unsigned path2 = reduce(num/10, k-1);
+  return path1 < path2 ? path1 : path2;
+}
+
+int main(void) {
+  int n,k;
+  scanf("%d%d",&n,&k);
+  printf("%u\n", reduce(n,k));
+  return 0;
+}