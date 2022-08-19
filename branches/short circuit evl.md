# 4.19 Short circuit evaluation
* A logical operator evaluates operands from left to right
* `Short circuit evaluation `skips evaluating later operands if the result of the logical operator can already be determined
    * The logical AND operator short circuits to false if the first operand evaluates to false, and skips evaluating the second operand.
    * The logical OR operator short circuits to true if the first operand is true, and skips evaluating the second operand.
