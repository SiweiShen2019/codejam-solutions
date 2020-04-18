main = do
  i <- getLine
  let n = read i :: Int
  j <- getLine
  let inputs = map (\x -> read x :: Integer) $ words j
  let max_ = maximum inputs
  let min_ = minimum inputs
  let max_count = length $ filter (==max_) inputs
  let min_count = length $ filter (==min_) inputs
  if max_ == min_
    then print 0
    else print $ n - max_count - min_count
