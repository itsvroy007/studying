import { useContext , createContext } from "react";

export const ThemeContext = createContext({
  themeMode: 'light',
  lightTheme: () => {},
  darkTheme: () => {},
})

export const ThemeProvider = ThemeContext.Provider

// creating custom hook  -> hook are also functions 
export default function useTheme(){
  return useContext(ThemeContext)
}


/*
createContext and useContext in one single file -> easy and no need for to different import 
*/ 