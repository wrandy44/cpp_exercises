int main(){
  int first = 5, s= 6, add_r, mul_res;

  add_mul_4param(first, s, &add_r, &mul_res);
  printf("%d+%d=%d\n%d\n", first, s, add_r, mul_res);
  add_r = first;
  mul_res = s;
  add_mul_2param(&add_r, &mul_res);
  printf("%d + %d\n", add_r, mul_res);
}
