SELECT 
CASE WHEN nts.Grade < 8 THEN NULL 
WHEN nts.Grade >= 8 THEN stu.Name END,
nts.Grade, stu.Value FROM Students stu, Notes nts
WHERE stu.Value BETWEEN nts.Min_Value AND nts.Max_Value
ORDER BY nts.Grade DESC, stu.Name ASC;
