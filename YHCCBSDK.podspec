
Pod::Spec.new do |s|

  s.name         = "YHCCBSDK"
  s.version      = "1.1.0"
  s.summary      = "中国建设银行个人网银-建行SDK"

  s.description  = "中国建设银行个人网银-建行SDK，包含微信支付SDK、支付宝支付、建行手机支付"

  s.homepage     = "https://github.com/XmYlzYhkj/YHCCBSDK"

  s.license      = "MIT"

  s.author       = { "XmYhkj" => "yhkj_xm@163.com" }
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHCCBSDK.git", :tag => s.version.to_s }

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  s.frameworks       = 'SystemConfiguration', 'CoreMotion','CFNetwork', 'CoreTelephony', 'QuartzCore', 'CoreText', 'CoreGraphics', 'UIKit', 'Foundation', 'Security'

  s.libraries        = 'z', 'c++', 'sqlite3'

  s.vendored_frameworks = ["Frameworks/CCBNetPaySDK.framework"]
  
  s.resources    = 'Resources/CCBSDK.bundle'

  s.dependency     'AlipaySDK-iOS'

  s.dependency     'WechatOpenSDK'

end
