var arr: array of integer;
var n: integer;

function positiveArr(arr: array of integer): integer;
begin
  var count: integer;
  for var i := 0 to arr.Length-1 do 
  begin
    if arr[i] > 0 then count := count + 1;
  end;
  result := count;
end;

begin
  read(n);
  arr := new integer[n];
  for var i:=0 to n-1 do 
  begin
    arr[i] := random(-100,100);
    writeln(arr[i]);
  end;
  writeln(positiveArr(arr));
end.