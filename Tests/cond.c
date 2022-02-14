extern int printd( int i );

int main() {
  int i;
  int j;
  i = 450;
  j = -123;

  if ( i+1 < j+0 ) printd(i); else printd(j);
  if ( i+1 < 123 ) printd(i); else printd(j);
  if ( i+1 < j ) printd(i); else printd(j);
  if ( 45 < j+0 ) printd(i); else printd(j);
  if ( 45 < 123 ) printd(i); else printd(j);
  if ( 45 < j ) printd(i); else printd(j);
  if ( i < j+0 ) printd(i); else printd(j);
  if ( i < 123 ) printd(i); else printd(j);
  if ( i < j ) printd(i); else printd(j);

  if ( i+1 > j+0 ) printd(i); else printd(j);
  if ( i+1 > 123 ) printd(i); else printd(j);
  if ( i+1 > j ) printd(i); else printd(j);
  if ( 45 > j+0 ) printd(i); else printd(j);
  if ( 45 > 123 ) printd(i); else printd(j);
  if ( 45 > j ) printd(i); else printd(j);
  if ( i > j+0 ) printd(i); else printd(j);
  if ( i > 123 ) printd(i); else printd(j);
  if ( i > j ) printd(i); else printd(j);

  if ( i+1 >= j+0 ) printd(i); else printd(j);
  if ( i+1 >= 123 ) printd(i); else printd(j);
  if ( i+1 >= j ) printd(i); else printd(j);
  if ( 45 >= j+0 ) printd(i); else printd(j);
  if ( 45 >= 123 ) printd(i); else printd(j);
  if ( 45 >= j ) printd(i); else printd(j);
  if ( i >= j+0 ) printd(i); else printd(j);
  if ( i >= 123 ) printd(i); else printd(j);
  if ( i >= j ) printd(i); else printd(j);

  if ( i+1 <= j+0 ) printd(i); else printd(j);
  if ( i+1 <= 123 ) printd(i); else printd(j);
  if ( i+1 <= j ) printd(i); else printd(j);
  if ( 45 <= j+0 ) printd(i); else printd(j);
  if ( 45 <= 123 ) printd(i); else printd(j);
  if ( 45 <= j ) printd(i); else printd(j);
  if ( i <= j+0 ) printd(i); else printd(j);
  if ( i <= 123 ) printd(i); else printd(j);
  if ( i <= j ) printd(i); else printd(j);

  if ( i+1 == j+0 ) printd(i); else printd(j);
  if ( i+1 == 123 ) printd(i); else printd(j);
  if ( i+1 == j ) printd(i); else printd(j);
  if ( 45 == j+0 ) printd(i); else printd(j);
  if ( 45 == 123 ) printd(i); else printd(j);
  if ( 45 == j ) printd(i); else printd(j);
  if ( i == j+0 ) printd(i); else printd(j);
  if ( i == 123 ) printd(i); else printd(j);
  if ( i == j ) printd(i); else printd(j);

  if ( i+1 != j+0 ) printd(i); else printd(j);
  if ( i+1 != 123 ) printd(i); else printd(j);
  if ( i+1 != j ) printd(i); else printd(j);
  if ( 45 != j+0 ) printd(i); else printd(j);
  if ( 45 != 123 ) printd(i); else printd(j);
  if ( 45 != j ) printd(i); else printd(j);
  if ( i != j+0 ) printd(i); else printd(j);
  if ( i != 123 ) printd(i); else printd(j);
  if ( i != j ) printd(i); else printd(j);

  return 0;
}
