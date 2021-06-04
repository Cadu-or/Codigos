-- Problem: 1016 - Distance

distance :: Int -> Int
distance a = a*2

main :: IO()
main = do
    a <- getLine
    let distancia = distance (read a)
        
    putStrLn $ show distancia ++ " minutos"