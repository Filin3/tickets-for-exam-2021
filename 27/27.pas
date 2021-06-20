var matrix: array[1..3] of array[1..3] of integer;
var tempMatrix: array[1..4] of integer;
var det, detCounter, tempDet:integer;
begin
  for var i := 1 to 3 do
  begin
    for var j := 1 to 3 do
    begin
      write(i,'|',j,' ');
      read(matrix[i][j]);
    end;
  end;
  for var column := 1 to 3 do begin
    detCounter := 1;
    for var i := 2 to 3 do begin   
      for var j := 1 to 3 do begin
        if column = j then begin
          continue;
        end else begin
          tempMatrix[detCounter] := matrix[i][j];
          detCounter := detCounter + 1;
        end;
      end;
    end;
    tempDet := matrix[1][column] * (tempMatrix[1] * tempMatrix[4] - tempMatrix[2] * tempMatrix[3]);
    if (column <> 2) then begin
      det := det + tempDet;
    end else begin
      det := det - tempDet;
    end;
  end;
  writeln(det);
end.