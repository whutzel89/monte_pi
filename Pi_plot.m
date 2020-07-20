A=importdata('pi.dat');

[row col]=size(A);

hold on;
for i = 1:row
    r = A(i,1)^2+A(i,2)^2;
    if (r<=1)
        scatter(A(i,1),A(i,2),'r');
    else
        scatter(A(i,1),A(i,2),'b');
    end
end
