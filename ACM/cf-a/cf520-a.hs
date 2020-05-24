import Data.Char
import Data.List

pangram :: String -> Bool
pangram s = (==26) $ length $ nub $ map toLower s

main = do
  i <- getLine
  s <- getLine
  if pangram s
    then putStrLn "YES"
    else putStrLn "NO"