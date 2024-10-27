import * as React from 'react'
import { SafeAreaProvider } from 'react-native-safe-area-context'
import { HybridObjectTestsScreen } from './screens/HybridObjectTestsScreen'
import { bip39 } from 'react-native-nitro-bip39'

export default function App() {
  React.useEffect(() => {
    console.log(bip39.openSSLVersion())
  }, [])
  return (
    <SafeAreaProvider>
      <HybridObjectTestsScreen />
    </SafeAreaProvider>
  )
}
