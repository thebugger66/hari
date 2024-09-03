import Body from "./Components/Body";
import Footer from "./Components/Footer";
import Header from "./Components/Header";

export function App() {
  
  return (
    <>
      <div className="bg-amber- min-h-screen px-6 py-5 flex flex-col gap-16 md:px-10 md:py-7 md:justify-between lg:px-16 lg:py-10"> 
        <Header/>
        <Body/>
        <Footer/>
      </div>
    </>
  )
}
