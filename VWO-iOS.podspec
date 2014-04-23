Pod::Spec.new do |s|
  s.name         = "VWO-iOS"
  s.version      = "0.1.0"
  s.summary      = "VWO SDK for A/B Testing iOS apps."

  s.homepage     = "http://vwo.com"
  s.license      = { :type => 'Commercial', :text => 'See http://vwo.com/terms-conditions' }
  s.author             = { 'VWO' => 'info@wingify.com' }
  s.social_media_url   = "http://twitter.com/wingify"

  s.platform     = :ios, "5.1"
  s.source       = { :git => "https://github.com/wingify/VWO-iOS.git" }
  s.public_header_files = "VWO.framework/**/*.h"
  s.frameworks = "Foundation", "UIKit"
  s.vendored_frameworks = "VWO.framework"
  s.requires_arc = true
  s.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
end
