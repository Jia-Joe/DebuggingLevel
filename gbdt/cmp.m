function  z= cmp(A,pp)%��pp��ջ���ҵ������A��Ԫ����ƥ���Ԫ��
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
m=ones(1,size(pp,2));

	for i=1:size(pp,2)
         

  	m(i)=cmp1(A,pp{i});

 	end
 [mx,z]=max(m);


return
end

